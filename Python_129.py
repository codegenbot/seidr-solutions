```
def minPath(grid, k):
    n = len(grid)
    res = []
    for _ in range(k):
        min_val = float('inf')
        pos = None
        for i in range(n):
            for j in range(n):
                if grid[i][j] < min_val:
                    min_val = grid[i][j]
                    pos = (i, j)
        res.append(min_val)
        for i in range(n):
            for j in range(n):
                if (i == pos[0] or j == pos[1]):
                    grid[i][j] -= 1
    return res