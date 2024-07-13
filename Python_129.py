def minPath(grid, k):
    n = len(grid)
    start = min((grid[i][j], i, j) for i in range(n) for j in range(n))[1:]
    path = [grid[start[0]][start[1]]]
    while len(path) < k:
        x, y = start
        neighbors = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
        next_cell = min(
            (grid[i][j], i, j) for i, j in neighbors if 0 <= i < n and 0 <= j < n
        )
        path.append(grid[next_cell[1]][next_cell[2]])
        start = next_cell[1:]
    return path