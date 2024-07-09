def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    while len(path) < k:
        r, c = divmod(
            grid.index([cell for row in grid for cell in row if cell == start]), n
        )
        neighbors = [(r - 1, c), (r + 1, c), (r, c - 1), (r, c + 1)]
        start = min(
            (
                grid[r][c]
                for r, c in neighbors
                if 0 <= r < n and 0 <= c < n and grid[r][c] not in path
            )
        )
        path.append(start)
    return path