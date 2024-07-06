def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path, path_len):
        nonlocal res
        if path_len >= k:
            res = min(res, path) if path < res else res
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [grid[ni][nj]], path_len + 1)

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]], 1)

    return res if res != float("inf") else []