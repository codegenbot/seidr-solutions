import math


def max_fill(grid, capacity):
    total_water = sum(row for row in map(sum, grid))
    return max(0, math.ceil(total_water / capacity) * capacity - total_water)