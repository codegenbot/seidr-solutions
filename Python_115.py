import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if not grid:
        return 0
    return math.ceil(total_water / min(len(row) for row in grid))