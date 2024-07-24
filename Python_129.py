```
def minPath(grid, k):
    n = len(grid)
    res = float("inf")
    for i in range(n - k + 1):
        temp = sum(grid[i][j] for j in range(k))
        if temp < res:
            res = temp
    return [f"{grid[0][0]} {grid[0][1]} ..."] if res == sum(grid[0]) else []