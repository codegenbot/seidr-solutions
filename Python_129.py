def minPath(grid, k):
    path = []
    n = len(grid)
    m = len(grid[0])
    for i in range(k):
        row = i // m
        col = i % m
        value = grid[row][col]
        path.append(value)
    return path