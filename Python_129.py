def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                t = path[:]
                t.append(grid[ni][nj])
                res = min((dfs(ni, nj, t), t), key=lambda a: (a.index(min(a)), a))
        return res

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])

    return res[0]