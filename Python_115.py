import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_cycles = -(-total_water // capacity)  # use ceiling division
    return max_cycles