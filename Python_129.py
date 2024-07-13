```
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if (i == 0 or i == n - 1) and (j == 0 or j == n - 1):
                continue
            res.append(grid[i][j])
    return sorted(res[:k + 1])