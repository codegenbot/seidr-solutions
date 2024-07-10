import math


def max_fill(grid, capacity):
    total_water = sum(min(capacity - cell, cell) for row in grid for cell in row)
    return math.ceil(total_water / (len(grid[0]) * capacity))