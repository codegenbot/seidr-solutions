import math

def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    return math.ceil(len(grid) * len(grid[0]) * capacity - total_water) // capacity