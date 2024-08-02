import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water % capacity == 0:
        return total_water // capacity
    else:
        return total_water // capacity + 1