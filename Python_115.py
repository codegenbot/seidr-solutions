import math


def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(cell for cell in row if cell < capacity)
    return min(total_water, capacity)