def minPath(grid, k):
    N = len(grid)
    mpath = [[0] * N for _ in range(N)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        mpath[i][j] = 1
        res = None
        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < N and 0 <= nj < N and not mpath[ni][nj]:
                p = dfs(ni, nj, path + [grid[ni][nj]])
                if res is None or p and p[-1] < res[-1]:
                    res = p
        mpath[i][j] = 0
        return res

    for i in range(N):
        for j in range(N):
            if len(dfs(i, j, [grid[i][j]])) == k:
                return dfs(i, j, [grid[i][j]])