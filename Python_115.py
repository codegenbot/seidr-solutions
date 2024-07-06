import math

def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(row)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed