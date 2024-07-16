import math

def calculate_water(grid, total_water):
    max_fill = math.ceil(total_water / (len(grid) * len(grid[0])))
    return max_fill