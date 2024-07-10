def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    while len(path) < k:
        x, y = next((i, j) for i in range(n) for j in range(n) if grid[i][j] == start)
        neighbors = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
        start = min(
            (grid[i][j], i, j) for i, j in neighbors if 0 <= i < n and 0 <= j < n
        )[0]
        path.append(start)
    return path