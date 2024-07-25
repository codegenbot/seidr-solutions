import math

def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row) * len(grid[0])
    return max(0, math.ceil(total_water / capacity) * len(grid[0]) - total_water)