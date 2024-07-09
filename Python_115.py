import math


def max_fill(grid, capacity):
    total_water = sum(row[1:-1] for row in grid).count(1)
    return math.ceil(total_water / capacity)