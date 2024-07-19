import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    total_cells = len(grid) * len(grid[0])
    additional_cells = max(0, math.ceil(total_water / capacity) - total_cells)
    return additional_cells