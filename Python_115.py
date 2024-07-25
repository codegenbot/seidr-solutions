import math

def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row)
    return max(0, math.ceil(total_water / len(grid[0]) / capacity) - total_water % len(grid[0])