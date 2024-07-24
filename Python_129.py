```
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                res.append(1)
                break
    for _ in range(k-1):
        for i in range(len(res)-1, -1, -1):
            if res[i] < n*n:
                res.append(res[i]+1)
                break
            elif res[i] == n*n:
                res.append(1)
                break
    return res