```
import math


def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(1 if cell else 0 for cell in row) for row in grid)
    total_buckets = -(-total_water // capacity)  
    return total_buckets