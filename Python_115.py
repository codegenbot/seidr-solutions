import math


def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            num_buckets += math.ceil(well / capacity) * capacity
    return num_buckets