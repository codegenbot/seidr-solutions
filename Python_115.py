```
import math

def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        total_water += sum(grid[i])
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed