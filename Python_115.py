import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_capacity = len(grid) * capacity
    diff_capacity_grid = max_water_capacity - total_water
    additional_cells = max(0, math.ceil(diff_capacity_grid / capacity) if diff_capacity_grid > 0 else 0)
    return additional_cells