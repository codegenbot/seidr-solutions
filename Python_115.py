import math


def max_fill(grid, capacity):
    total_water = sum(
        cell * grid_size for grid_size, row in enumerate(grid) for cell in row
    )
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed