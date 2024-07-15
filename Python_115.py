import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_needed = math.ceil(total_water / capacity) * len(grid) * capacity - total_water
    return water_needed