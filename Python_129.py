def minPath(grid, k):
    path = []
    n = len(grid)
    m = len(grid[0])
    for i in range(k):
        row = i // m
        col = i % m
        if row < n and col < m:
            value = grid[row][col]
            path.append(value)
        else:
            break
    return path