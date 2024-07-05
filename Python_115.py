import math

def max_fill(grid, capacity):
    if not grid or capacity == 0:
        return 0
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)