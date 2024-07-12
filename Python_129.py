def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        i, j = next(
            (i, j)
            for i, j in visited
            if (i + 1, j) in visited
            or (i - 1, j) in visited
            or (i, j + 1) in visited
            or (i, j - 1) in visited
        )
        val = grid[i][j]
        visited.remove((i, j))
        path.append(val)

    return path