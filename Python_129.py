def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = [[False] * n for _ in range(n)]
    path = []
    queue = [(0, 0, 0, [])]

    while queue:
        x, y, cost, p = queue.pop(0)
        if len(p) == k:
            return p
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                queue.append((nx, ny, cost + grid[nx][ny], p + [m[nx][ny]]))
                visited[nx][ny] = True

    return []