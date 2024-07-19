def minPath(grid, k):
    path = []
    for i in range(len(grid) * len(grid[0])):
        row = i // len(grid[0])
        col = i % len(grid[0])
        value = grid[row][col]
        path.append(value)
    return path