```Python
import math


def max_fill(grid, capacity):
    total_water = sum(val for row in grid for val in row if val > 0)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed