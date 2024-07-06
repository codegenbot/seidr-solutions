def minPath(grid, k):
    n = len(grid)
    res = None

    def dfs(i, j, path):
        nonlocal res
        if len(path) >= k:
            if not res or sum(path) < sum(res):
                res = path
        else:
            for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                ni, nj = i + di, j + dj
                if 0 <= ni < n and 0 <= nj < n:
                    dfs(ni, nj, path + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            visited = [[False] * n for _ in range(n)]
            visited[i][j] = True
            dfs(i, j, [grid[i][j]])
            visited[i][j] = False

    return res