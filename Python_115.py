```
import math
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    full_buckets = math.ceil(total_water / capacity)
    return full_buckets