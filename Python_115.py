import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_needed = math.ceil(total_water / capacity)
    return max(0, water_needed - len(grid))