import math

def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - block) for row in grid for block in row)
    return max(0, math.ceil(total_water / capacity) * len(grid[0]) - total_water)