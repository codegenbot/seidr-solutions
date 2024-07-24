def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    queue = [(i, j, [grid[i][j]]) for i in range(n) for j in range(m)]
    res = []

    while queue:
        x, y, path = queue.pop(0)

        if len(path) > k:
            continue

        if len(path) == k:
            res = path
            break

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited[nx][ny] = True

    return res