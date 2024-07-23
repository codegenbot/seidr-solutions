```
import math


def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(1 for row in grid for cell in row if cell == 1)
    total_buckets = math.ceil(total_water / capacity)
    return int(total_buckets)