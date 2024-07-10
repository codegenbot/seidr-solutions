import math


def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(min(bucket) for bucket in [row] * len(row))
    return math.ceil(total_water / capacity)