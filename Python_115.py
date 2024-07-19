import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_capacity = len(grid) * capacity
    diff_capacity_grid = max(1, capacity - len(grid))
    additional_cells = max(0, math.ceil((total_water - max_water_capacity) / diff_capacity_grid) if diff_capacity_grid > 0 else 0)
    return additional_cells