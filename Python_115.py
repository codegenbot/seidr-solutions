import math

def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - cell) for cell in grid)
    fills = math.ceil(total_water / capacity)
    return fills