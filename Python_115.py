import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    required_water = capacity * len(grid) - total_water
    return max(required_water, 0)