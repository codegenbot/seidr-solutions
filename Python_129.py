def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        i, j = next(
            (i, j)
            for i, j in visited
            for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]
            if (i + di, j + dj) in visited
        )
        path.append(grid[i][j])
        visited.remove((i, j))

    return path