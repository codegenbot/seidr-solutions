def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    queue = [(grid[0][0], [grid[0][0]], 1)]
    res = []

    while queue:
        val, path, length = queue.pop(0)
        if length > k:
            continue
        if length == k:
            res.append(path)
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path[-1] - 1, n) + (dx, dy)
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                queue.append((grid[x][y], path + [grid[x][y]], length + 1))
                visited[x][y] = True
    return min(res)