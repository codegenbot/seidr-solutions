def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res = sorted(path)
            return True

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                dfs(ni, nj, path + [grid[ni][nj]])
        return False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return res