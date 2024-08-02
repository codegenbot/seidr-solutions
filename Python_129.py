def minPath(grid, k):
    n = len(grid)
    start = (
        min(min(row) for row in grid)
        if isinstance(grid[0][0], int)
        else min(sum(grid, []))
    )
    path = [start]

    while len(path) < k:
        x, y = divmod(grid.index([start]) if isinstance(start, list) else start, n)
        neighbors = [
            (x + dx, y + dy)
            for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]
            if 0 <= x + dx < n and 0 <= y + dy < n
        ]
        start = min(grid[nx][ny] for nx, ny in neighbors)
        path.append(start)

    return path