def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    visited = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}

    while len(path) < k:
        x, y = next(
            (i, j)
            for i, j in visited
            for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]
            if 0 <= i + di < n and 0 <= j + dj < n and (i + di, j + dj) not in visited
        )
        path.append(grid[x][y])
        visited.add((x, y))

    return path