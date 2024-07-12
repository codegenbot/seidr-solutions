import math


def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(row)
    buckets_needed = -(-total_water // capacity)  # use ceiling division
    return buckets_needed