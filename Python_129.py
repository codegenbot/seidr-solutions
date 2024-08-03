def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res.append(path[:])
            return

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in path:
                dfs(ni, nj, path + [(grid[ni][nj], ni, nj)])

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j], i, j])

    return sorted(res, key=lambda x: x[0])