import math

def max_fill(grid, capacity):
    total_water = sum(1 for row in grid for cell in row if cell)
    return math.ceil(total_water / capacity) if capacity > 0 else float('inf')