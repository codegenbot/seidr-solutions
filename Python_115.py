import math


def max_fill(n, capacity_grid):
    num_rows = len(capacity_grid)
    m = len(capacity_grid[0])
    total_water = sum(cell for row in capacity_grid for cell in row if cell > 0)
    max_capacity = min(row[-1] for row in capacity_grid)
    return math.ceil(total_water / (n * max_capacity))