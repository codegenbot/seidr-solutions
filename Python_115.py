import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    filled_capacity = math.ceil(total_water / capacity)
    return filled_capacity