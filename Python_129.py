def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                if grid[ni][nj] == path[-1]:
                    res.append(dfs(ni, nj, path + [grid[ni][nj]]))
        return min(res, key=len) if res else []

    res = dfs(0, 0, [grid[0][0]])
    return res