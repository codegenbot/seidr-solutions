import math


def max_fill(grid, capacity):
    return sum(
        sum(1 + (math.ceil((n - c) / capacity)) if n > 0 else 0 for n in row)
        for row in grid
    )