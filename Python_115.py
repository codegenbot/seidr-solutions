import math

def max_fill(grid, capacity):
    total_water = sum(max(row) for row in grid)
    return math.ceil(total_water / capacity)