import math


def max_fill(grid, capacity):
    total_water = sum(min(capacity, (row[0] + row[-1]) // 2) * len(row) for row in grid)
    return math.ceil(total_water / capacity)