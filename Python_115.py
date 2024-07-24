import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_capacity = len(grid) * len(grid[0])

    return math.ceil((total_water - max_capacity) / capacity) + 1