import math

def max_fill(grid, capacity):
    total_water = sum(row for row in map(sum, grid))
    return math.ceil(total_water / capacity) if total_water > 0 else 0