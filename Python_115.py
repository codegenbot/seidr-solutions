import math


def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            num_buckets += int(math.ceil(well / capacity))
    return int(math.ceil(num_buckets / 2))