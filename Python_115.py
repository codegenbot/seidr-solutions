import math

def max_fill(grid, capacity):
    return sum(math.ceil(sum(row) / capacity) for row in grid) if grid else 0