import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return max(buckets_needed, 0) * len(grid[0]) * len(grid) - total_water
