import math

def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row)
    return max(0, capacity * len(grid[0]) - total_water)