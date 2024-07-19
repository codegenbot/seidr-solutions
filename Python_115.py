import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_capacity = len(grid) * capacity
    additional_cells = math.ceil(max(0, total_water - max_water_capacity) / capacity)
    return additional_cells