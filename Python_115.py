import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid) - len(grid) * capacity
    return math.ceil(total_water / capacity)