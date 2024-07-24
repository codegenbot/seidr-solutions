import math

def max_fill(grid, capacity):
    total_cells = len(grid) * len(grid[0])
    total_water = total_cells - sum(row.count(1) for row in grid)
    return math.ceil(total_water / capacity)