import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return max(0, math.ceil(total_water / capacity) - max(grid[i][j] for i in range(len(grid)) for j in range(len(grid[0])))