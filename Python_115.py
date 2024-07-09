import math


def max_fill(grid, capacity):
    total_capacity = sum(sum(row) for row in grid)
    return math.ceil(total_capacity / capacity)