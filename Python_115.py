import math

def calculate_water_needed(total_water, grid):
    return math.ceil(total_water / (len(grid) * len(grid[0])))