import math
def max_fill(grid, capacity):
    current_water = sum(sum(row) for row in grid)
    ideal_water = len(grid) * len(grid[0]) * capacity
    return max(0, ideal_water - current_water)