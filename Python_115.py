import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = math.ceil(total_water / capacity)
    return max(max_water - total_water, 0)