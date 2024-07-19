import math

def max_fill(grid, capacity):
    total_water = sum(cell for row in grid for cell in row)
    additional_cells = max(0, math.ceil(total_water / capacity) - len(grid) * len(grid[0]))
    return additional_cells