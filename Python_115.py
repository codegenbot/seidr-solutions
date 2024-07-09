import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity) * len(grid[0]) - total_water if total_water > capacity else 0