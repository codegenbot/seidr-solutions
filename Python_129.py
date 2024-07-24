```
def minPath(grid, k):
    n = len(grid)
    res = float("inf")
    minPathSum = min(sum(grid[i][j] for j in range(k)) for i in range(n - k + 1))
    return [" ".join(map(str, grid[0]))] + ["..."] * (k-1)