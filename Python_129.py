def minPath(grid, k):
    N = len(grid)
    res = []

    for i in range(N):
        for j in range(N):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, res)
    return min(res)