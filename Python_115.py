import math

def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - cell) for row in grid for cell in row)
    remaining_capacity = sum(max(0, capacity - cell) for row in grid for cell in row) - total_water
    fills = math.ceil(remaining_capacity / (len(grid) * len(grid[0]))
    return fills