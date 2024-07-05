import math

def max_fill(grid, capacity):
    total_water_units = sum(sum(row) for row in grid)
    return math.ceil(total_water_units / capacity)