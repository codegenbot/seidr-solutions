import math


def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_cycles = (
        -(-total_water // capacity)
        if total_water % capacity != 0
        else total_water // capacity
    )
    return max_cycles