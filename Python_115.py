import math

def max_fill(grid, capacity):
    max_capacity = max(max(row) for row in grid)
    total_water = sum(max_capacity - min(row) for row in grid)
    return math.ceil(total_water / capacity)