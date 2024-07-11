def minPath(grid, k):
    N = len(grid)
    res = []
    for i in range(N):
        for j in range(N):
            for _ in range(k):
                res.append(grid[i][j])
    return sorted(res)[:k]