import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid) - len(grid) * 1
    return math.ceil(total_water / capacity)