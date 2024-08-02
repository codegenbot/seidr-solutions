import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    fills_needed = total_water / capacity
    return math.ceil(fills_needed) if total_water > 0 else 0