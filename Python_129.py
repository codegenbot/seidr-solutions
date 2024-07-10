def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    while len(path) < k:
        i, j = start
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        next_cell = min(
            (grid[x][y], x, y) for x, y in neighbors if 0 <= x < n and 0 <= y < n
        )
        path.append(grid[next_cell[1]][next_cell[2]])
        start = next_cell[1:]
    return path