import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water = math.ceil(total_water / len(grid[0]) / capacity)
    return max(max_water * len(grid[0]) * capacity - total_water, 0)