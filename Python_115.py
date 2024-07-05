import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return (total_water + capacity - 1) // capacity if capacity > 0 else math.inf