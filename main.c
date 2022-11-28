/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <zakytrottier@hotmail.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:15:21 by ztrottie          #+#    #+#             */
/*   Updated: 2022/11/25 12:51:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*tmp;
	char	a;

	tmp = &a;
	fd = open("text.txt", O_RDONLY);
	while (tmp != NULL)
	{
		tmp = get_next_line(fd);
		printf("%s", tmp);
		if (tmp)
			free(tmp);
	}
	close (fd);
	return (0);
}
