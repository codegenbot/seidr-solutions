import math


def max_fill(grid, capacity):
    rows = [min(c for c in row) for row in grid]
    return sum(1 for _ in (math.ceil(sum(row) / capacity) for row in rows)) // capacity