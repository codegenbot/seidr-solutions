def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]

    while len(path) < k:
        min_val = min(val for val in grid[i][j] for i in range(n) for j in range(n) if grid[i][j] not in path)
        path.append(min_val)
        path.append(start)

    return path[:k]