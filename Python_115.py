import math

def max_fill(grid, capacity):
    max_water = max(max(row) for row in grid)
    return math.ceil(max_water / capacity)