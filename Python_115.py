```
import math


def max_fill(grid, n):
    total_water = 0
    max_capacity = max(grid)
    for cell in grid:
        if cell > 0 and cell > max_capacity:
            max_capacity = cell
        if cell > 0 and cell <= max_capacity:
            total_water += cell
    return math.ceil(total_water / (n * max_capacity))