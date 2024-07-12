```
import math

def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += len(row) - max(len(cell) for cell in row)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed