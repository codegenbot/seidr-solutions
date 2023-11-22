import math
def max_fill(grid, capacity):
    max_water = max(max(row) for row in grid)
    buckets_needed = math.ceil(max_water / capacity)
    return buckets_needed