import math

def calculate_water(grid, total_water):
    return math.ceil(total_water / (len(grid) * len(grid[0])))