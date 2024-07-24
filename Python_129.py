```
def minPath(grid, k):
    n = len(grid)
    res = float("inf")
    minPathSum = min(temp for temp in (sum(grid[i][j] for j in range(k)) for i in range(n - k + 1)))
    for i in range(n - k + 1):
        temp = sum(grid[i][j] for j in range(k))
        if temp < res:
            res = temp
    return [" ".join(map(str, grid[0]))] + ["..."] * (k-1)