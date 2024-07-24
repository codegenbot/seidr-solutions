import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    fills_needed = math.ceil(total_water / capacity) if total_water > 0 else 0
    return fills_needed