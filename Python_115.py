import math


def max_fill(grid, capacity):
    total_water = sum(
        min(grid[i][j], grid[i].count(capacity), grid[i + 1 :].count(capacity))
        for i in range(len(grid))
    )
    return math.ceil(total_water / capacity)