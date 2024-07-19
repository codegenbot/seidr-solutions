import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_capacity = len(grid) * capacity
    additional_cells = max(0, math.ceil((total_water - max_water_capacity) / (capacity - len(grid[0]) * len(grid)))
    return additional_cells