def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path, paths):
        nonlocal res
        if not res or len(path) < len(res[0]):
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [grid[ni][nj]], paths + [path])

    for i in range(n):
        for j in range(n):
            visited = [[False] * n for _ in range(n)]
            visited[i][j] = True
            dfs(i, j, [grid[i][j]], [])

    return min((p for p in res if len(p) == k), default=[0] * k)