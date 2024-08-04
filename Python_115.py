import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return 1 if total_water <= capacity else math.ceil(total_water / capacity)