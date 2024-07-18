import math


def max_fill(grid, capacity):
    max_water = max(max(row) for row in grid)
    buckets_needed = math.ceil(max_water / capacity)
    total_water_needed = buckets_needed * capacity
    return max(
        buckets_needed * len(grid[0]) * len(grid) - sum(sum(row) for row in grid), 0
    )