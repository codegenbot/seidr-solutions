def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] < n * n:
                res.append(grid[i][j])
                grid[i][j] = -1
                if len(res) == k:
                    return res
    return [grid[0][0]]