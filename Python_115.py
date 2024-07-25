import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    additional_water_needed = math.ceil(total_water / capacity) * len(grid) - total_water
    return max(0, additional_water_needed)