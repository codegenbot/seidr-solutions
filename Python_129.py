def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    path = [start]
    while len(path) < k:
        x, y = divmod(grid.index([start]), n)
        neighbors = [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
        next_val = float("inf")
        next_pos = None
        for nx, ny in neighbors:
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < next_val:
                next_val = grid[nx][ny]
                next_pos = (nx, ny)
        path.append(next_val)
        start = next_val
    return path