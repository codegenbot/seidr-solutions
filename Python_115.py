import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    additional_cells = max(0, total_water % capacity - len(grid[0]))  # Update this line to use modulo operator
    return additional_cells