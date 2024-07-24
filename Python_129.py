```
def minPath(grid, k):
    n = len(grid)
    res = float("inf")
    for i in range(n - k + 1):
        temp = sum(grid[i][j] for j in range(k))
        if temp < res:
            res = temp
    return [f"{grid[i][0]} {grid[i][k-1]}" for i in range(n) if sum(grid[i][j] for j in range(k)) == res]