import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return max(0, math.ceil(total_water / len(grid[0]) - capacity))