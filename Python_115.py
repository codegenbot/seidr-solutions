import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid) * capacity
    return math.ceil(total_water / capacity)