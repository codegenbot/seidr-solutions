import math


def max_fill(grid, capacity):
    total_water = sum(
        min(row[i], column)
        for i, row in enumerate(grid)
        for column in [capacity] * len(grid)
    )
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed