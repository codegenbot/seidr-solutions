import math


def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(min(c, cap) for c, cap in zip(row, [capacity] * len(row)))
    return math.ceil(total_water / capacity)