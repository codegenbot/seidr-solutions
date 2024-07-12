from math import ceil


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = ceil(total_water / capacity)
    return buckets_needed