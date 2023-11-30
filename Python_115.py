import math


def max_fill(grid, capacity):
    if not grid or not grid[0] or capacity <= 0:
        return -1
    num_buckets = 0
    for row in grid:
        for well in row:
            if well < 0:
                return -1
            num_buckets += math.ceil(well / capacity)
    return num_buckets