```
def minPath(grid, k):
    n = len(grid)
    res = []
    for _ in range(k):
        min_val = None
        for i in range(n):
            for j in range(n):
                if grid[i][j] < (n * n) // 2:
                    if min_val is None or grid[i][j] < min_val:
                        min_val = grid[i][j]
        res.append(min_val)
    return res