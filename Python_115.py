import math

def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed * len(grid) * len(grid[0]) - total_water