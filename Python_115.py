import math

def max_fill(n, grid):
    total_water = sum(cell for row in grid for cell in row if 0 < cell <= n)
    max_capacity = min(max(row) for row in grid)
    return math.ceil(total_water / (n * max_capacity))