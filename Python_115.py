import math

def max_fill(grid, capacity):
    max_height = max(max(row) for row in grid)
    total_water = sum(max_height - cell for row in grid for cell in row)
    fills = math.ceil(total_water / capacity)
    return fills