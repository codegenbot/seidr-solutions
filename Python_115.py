import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    additional_cells = max(0, total_water - (len(grid) * len(grid[0]) * capacity)
    return additional_cells