import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if capacity == 0:
        return 0
    return math.ceil(total_water / capacity)