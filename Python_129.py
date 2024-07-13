def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                res.extend(dfs(ni, nj, path + [m[ni][nj]]))
        return min(res)

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                return dfs(i, j, [grid[i][j]])