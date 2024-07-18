import math

def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - cell) for row in grid for cell in row)
    return max(0, math.ceil(total_water / capacity) * len(grid[0] if grid else 0) - total_water)