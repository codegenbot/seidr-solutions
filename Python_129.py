    def minPath(grid, k):
        # Create a graph from the grid
        g = Graph()
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    g.add_node((i, j))
                    if (i - 1) >= 0 and grid[i - 1][j] != 1:
                        g.add_edge((i, j), (i - 1, j))
                    if (j - 1) >= 0 and grid[i][j - 1] != 1:
                        g.add_edge((i, j), (i, j - 1))
                    if (i + 1) < len(grid) and grid[i + 1][j] != 1:
                        g.add_edge((i, j), (i + 1, j))
                    if (j + 1) < len(grid[i]) and grid[i][j + 1] != 1:
                        g.add_edge((i, j), (i, j + 1))

        # Perform BFS from the starting point to the ending point
        start = (0, 0)
        end = (len(grid) - 1, len(grid[0]) - 1)
        path = g.bfs_tree(start, end)

        return path