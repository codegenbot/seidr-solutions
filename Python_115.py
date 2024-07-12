import math

def max_fill(n, capacity_grid):
    total_water = 0
    for row in capacity_grid:
        total_water += len(row)
    max_capacity = min(min(row) for row in capacity_grid)
    return math.ceil(total_water / (n * max_capacity))