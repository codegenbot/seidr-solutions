import math

def max_fill(grid):
    capacity = [1] * len(grid[0])
    max_water = max(max(row) for row in grid)
    buckets_needed = math.ceil(max_water / sum(capacity))
    return buckets_needed