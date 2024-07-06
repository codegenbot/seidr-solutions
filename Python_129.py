def findMinPath(grid):
    n = len(grid)
    res = []

    def dfs(i, j, k, grid, path):
        if k == 0:
            res.append(path[:])
            return
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                temp = grid[ni][nj]
                grid[ni][nj], path.append(temp)
                dfs(ni, nj, k - 1, grid, path)
                path.pop()
                if len(res) > 0 and len(path) + len(res[-1]) == k:
                    return

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                dfs(i, j, n * n - 2, grid, [grid[i][j]])
    return res