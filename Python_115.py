import math

def max_fill(grid, capacity):
    total_water = sum(sum(cell for cell in row) for row in grid)
    return math.ceil(total_water / capacity) - total_water