```
import math


def max_fill(grid, capacity):
    num_rows = len(grid)
    total_capacity = num_rows * capacity
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / total_capacity)