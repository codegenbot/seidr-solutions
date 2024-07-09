import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid) - capacity
    return math.ceil(max(0, total_water) / capacity)