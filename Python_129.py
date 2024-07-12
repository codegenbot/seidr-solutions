def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                res.extend(dfs(ni, nj, path + [m[ni][nj]]))
        return min(res)

    return dfs(0, 0, [grid[0][0]])