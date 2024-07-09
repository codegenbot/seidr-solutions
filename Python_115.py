import math

def max_fill(grid, capacity):
    total_water = sum(sum(max(0, cell - capacity) for cell in row) for row in grid)
    return math.ceil(total_water / capacity)