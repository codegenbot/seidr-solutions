def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]

    def dfs(x, y, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True

        visited[x][y] = True
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny, path + [grid[x][y]])
        visited[x][y] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [])

    return res