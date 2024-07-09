import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    excess_water = max(total_water - capacity, 0)
    return math.ceil(excess_water / capacity)