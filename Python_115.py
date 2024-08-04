import math

def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - min(row)) for row in zip(*grid))
    return math.ceil(total_water / capacity)