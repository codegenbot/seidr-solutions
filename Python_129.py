def minPath(grid, k):
    N = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return False

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                if abs(grid[ni][nj] - grid[i][j]) <= k:
                    dfs(ni, nj, path + [grid[ni][nj]])

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])

    return res