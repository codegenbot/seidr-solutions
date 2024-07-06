import math


def max_fill(grid, capacity):
    total_water = sum(sum(1 for x in row) for row in grid)
    buckets_needed = -(-total_water // capacity)
    return buckets_needed