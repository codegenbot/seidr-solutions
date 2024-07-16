import math

def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row) - sum(max(0, capacity - cell) for row in grid for cell in row)
    return math.ceil(max(0, total_water) / capacity)