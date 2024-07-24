import math

def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    return -(-total_water // capacity)  # Use integer division to get the correct result