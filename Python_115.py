import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    cells_needed = math.ceil(total_water / capacity)
    additional_cells = max(0, cells_needed - len(grid) * len(grid[0]))
    return additional_cells