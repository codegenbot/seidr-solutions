import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(max(total_water - capacity, 0) / capacity)