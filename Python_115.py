import math


def max_fill(grid, capacity):
    total_water = sum(sum(1 for pixel in row if pixel) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed