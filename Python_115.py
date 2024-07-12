import math
def max_fill(n, grid):
    rows = len(grid)
    cols = len(grid[0])
    total_water = rows * cols
    max_capacity = min(row for row in grid)
    return math.ceil(total_water / (n * max_capacity))