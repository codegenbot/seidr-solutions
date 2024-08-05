import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / max(map(max, grid)))
    return max(buckets_needed * capacity - total_water, 0)