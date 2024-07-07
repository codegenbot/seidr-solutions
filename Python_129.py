def minPath(grid, k):
    N = len(grid)
    res = []
    for i in range(N):
        for j in range(N):
            if grid[i][j] <= k:
                res.append(grid[i][j])
                k -= 1
                if k == 0:
                    return res
    return res