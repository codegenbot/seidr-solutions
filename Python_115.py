import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))

    if capacity > sum(max(row) for row in grid):
        return "It's not possible to fill the buckets as the maximum water per row is less than the bucket capacity."
    else:
        return buckets_needed