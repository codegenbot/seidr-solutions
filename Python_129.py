def minPath(grid, k):
    n = len(grid)
    res = float("inf")

    def dfs(i, j, path):
        nonlocal res
        if len(path) >= k:
            res = min(res, sum(int(x) for x in path))
            return

        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n:
                dfs(ni, nj, path + [grid[ni][nj]])

    for i in range(n):
        for j in range(n):
            if grid[i][j].isdigit():
                dfs(i, j, [grid[i][j]])

    return res