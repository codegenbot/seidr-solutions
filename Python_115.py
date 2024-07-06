import math


def max_fill(grid, capacity):
    rows = [min(c for c in row) for row in grid]
    avg_rows = [(sum(row) / capacity) for row in rows]
    return math.ceil(sum(r / capacity) for r in avg_rows)