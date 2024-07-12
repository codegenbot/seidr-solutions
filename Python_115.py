import math


def max_fill(grid, capacity):
    return math.ceil(max(sum(row) for row in grid) / capacity)