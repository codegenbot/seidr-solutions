import math


def max_fill(grid, capacity):
    total = sum(sum(row) for row in grid)
    empty_tanks = (capacity - total) // min(len(row) for row in grid)
    return math.ceil((total + (empty_tanks + 1) * len(grid[0])) / capacity)