def minPath(grid, k):
    path = []
    n = len(grid)
    m = len(grid[0])
    for i in range(k):
        value = grid[i % n][i % m]
        path.append(value)
    return path