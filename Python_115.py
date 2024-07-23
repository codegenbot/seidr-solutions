import math


def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    return -(-total_water // capacity)