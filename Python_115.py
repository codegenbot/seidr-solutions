import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_capacity = max(0, math.ceil(total_water / capacity))
    return max_capacity