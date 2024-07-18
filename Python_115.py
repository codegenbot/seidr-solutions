import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_water_fill = total_water - capacity * len(grid) * len(grid[0])
    return max(0, math.floor(max_water_fill / (capacity * len(grid[0]))) if capacity * len(grid[0]) > 0 else float('inf'))