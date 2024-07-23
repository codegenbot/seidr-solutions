def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                res.append(1)
                break
    while len(res) < k:
        res.extend([n * n])
    return res[:k]