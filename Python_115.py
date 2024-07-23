import math


def max_fill(grid, capacity):
    sorted_grid = sorted([(sum(row), i) for i, row in enumerate(grid)], reverse=True)

    total_water = 0
    for rainfall, _ in sorted_grid:
        total_water += rainfall % (capacity + 1)

    return math.ceil(total_water / float(capacity))