import math

def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    return math.ceil(abs(total_water) / capacity) if total_water < 0 else 0