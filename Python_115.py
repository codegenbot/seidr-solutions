import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return min(math.ceil(total_water / c) for c in set(capacity))