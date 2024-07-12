import math


def max_fill(n, grid):
    m = len(grid[0])
    total_water = sum(cell for row in grid for cell in row if cell > 0)
    max_capacity = min(max(row) for row in grid)
    return math.ceil(total_water / (n * max_capacity))