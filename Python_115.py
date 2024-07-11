import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / min(capacity for _ in range(len(grid[0]))))