```
import math


def max_fill(grid, capacity):
    total_capacity = sum(sum(1 for x in row) * capacity for row in grid)
    return math.ceil(total_capacity / capacity)