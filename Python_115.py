import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    additional_water_needed = max(0, math.ceil(total_water / capacity) * capacity - total_water)
    return math.ceil(additional_water_needed / len(grid[0]))