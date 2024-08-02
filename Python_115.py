import math


def max_fill(grid, capacity):
    total_water = sum(cell for row in grid for cell in row)
    return math.ceil(max(total_water / capacity, 0))