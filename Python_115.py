import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    cells_needed = math.ceil(total_water / capacity)
    additional_cells = max(0, cells_needed * len(grid[0]) - total_water)
    return cells_needed