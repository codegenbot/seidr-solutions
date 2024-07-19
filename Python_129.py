def minPath(grid, k):
    path = []
    n = len(grid)
    m = len(grid[0])
    total_elements = n * m
    for i in range(k):
        value = grid[i // m][i % m]
        path.append(value)
        if i + 1 == total_elements:
            i = -1
    return path