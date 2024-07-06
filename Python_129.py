def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path_len, path_sum):
        nonlocal res
        if path_len >= k:
            res = min(res, path_sum) if res > path_sum else res
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path_len + 1, path_sum + grid[ni][nj])

    for i in range(n):
        for j in range(n):
            dfs(i, j, 0, grid[i][j])

    return res if res != float("inf") else []