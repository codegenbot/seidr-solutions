def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return

        for di, dj in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in path:
                dfs(ni, nj, path + [(ni * n) + nj])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [(i * n) + j])

    return res