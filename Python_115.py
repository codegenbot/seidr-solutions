import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water <= capacity * len(grid):
        return len(grid) * capacity - total_water
    return max(0, math.ceil(total_water / capacity) - len(grid) * capacity)