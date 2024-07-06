import math


def max_fill(grid, capacity):
    rows = [min(c for c in row) for row in grid]
    return math.ceil(sum(row / float(capacity)) for row in rows)