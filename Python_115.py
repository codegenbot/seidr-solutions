import math

def max_fill(grid, capacity):
    return math.floor(sum(sum(row) for row in grid) / capacity)