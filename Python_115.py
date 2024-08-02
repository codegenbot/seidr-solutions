import math

def max_fill(grid, capacity):
    total_water = sum(max(0, sum(row) - capacity) for row in grid)
    return math.ceil(total_water / capacity)