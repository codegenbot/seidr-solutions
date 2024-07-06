import math


def max_fill(grid, capacity):
    rows = [min(c for c in row) for row in grid]
    return math.ceil(sum(r / capacity) for r in (sum(row) / capacity for row in rows))