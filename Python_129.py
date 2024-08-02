```
def findMinValue(grid):
    n = len(grid)
    min_val = float('inf')
    for i in range(n):
        for j in range(n):
            if grid[i][j] < min_val:
                min_val = grid[i][j]
    return min_val