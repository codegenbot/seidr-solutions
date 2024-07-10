```
import math

def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for row in range(rows):
        for col in range(cols):
            if row == 0 or row == rows-1 or col == 0 or col == cols-1:
                total_water += grid[row][col]
            else:
                total_water += min(grid[row][col-1], grid[row][col+1], grid[row-1][col], grid[row+1][col]) - max(grid[row][col-1], grid[row][col+1], grid[row-1][col], grid[row+1][col])
    return math.ceil(total_water / float(capacity))