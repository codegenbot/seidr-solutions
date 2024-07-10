def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if len(res) < k:
                res.append(grid[i][j])
            else:
                break
    return res