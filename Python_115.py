import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_capacity = len(grid) * capacity
    diff_capacity_grid = capacity - (len(grid) * len(grid[0]))
    additional_cells = max(0, math.ceil((total_water - max_water_capacity) / diff_capacity_grid) if diff_capacity_grid != 0 else float('inf'))
    return additional_cells