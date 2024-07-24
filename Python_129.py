def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] != 0:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path)
                if not res or sorted(res[-1]) < sorted(path):
                    res = path
    return res