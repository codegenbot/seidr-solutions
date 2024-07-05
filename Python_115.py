import math

def max_fill(grid, capacity):
    if capacity <= 0:
        raise ValueError("Capacity must be greater than 0")
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)