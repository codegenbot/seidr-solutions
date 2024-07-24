def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                res.append(dfs(ni, nj, path + [grid[ni][nj]]))
        return min(res) if res else []

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [])
            if res:
                return res