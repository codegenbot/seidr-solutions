import math

def max_fill(grid, capacity):
    total_water = min(sum(min(cell, capacity) for cell in row) for row in grid)
    return math.ceil(total_water / capacity) * len(grid[0]) - total_water