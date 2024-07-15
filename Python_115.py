import math

def max_fill(grid, capacity):
    total_water = sum(cell - capacity if cell > capacity else 0 for row in grid for cell in row)
    return math.ceil(total_water / capacity) * len(grid) - total_water