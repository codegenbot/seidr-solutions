import math


def max_fill(grid, capacity):
    max_water = max(max(row) for row in grid)
    total_buckets = 0

    for row in grid:
        for cell in row:
            buckets_needed = math.ceil(cell / capacity)
            total_buckets += buckets_needed

    return total_buckets