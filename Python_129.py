def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    res = []
    visited = set()

    def dfs(x, y, path):
        if len(path) == k:
            nonlocal res
            res = min(res, tuple(sorted(path)))
            return

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and m[nx][ny] not in visited:
                visited.add(m[nx][ny])
                dfs(nx, ny, path + [m[nx][ny]])
                visited.remove(m[nx][ny])

    for i in range(n):
        for j in range(n):
            visited = set()
            dfs(i, j, [m[i][j]])

    return list(res)