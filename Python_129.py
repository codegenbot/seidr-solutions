def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] <= k:
                res.append(grid[i][j])
                k -= 1
                if k == 0:
                    return res
    return res