import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_capacity = len(grid) * len(grid[0]) * capacity
    additional_cells = max(0, math.ceil(total_water / capacity) - max_water_capacity)
    return additional_cells