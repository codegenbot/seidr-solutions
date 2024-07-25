import math

def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    remaining_capacity = len(grid) * len(grid[0]) - total_water
    fills = math.ceil(remaining_capacity / capacity)
    return fills