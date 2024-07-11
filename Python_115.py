import math


def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] > capacity:
                total_water += min(grid[i][j], capacity) - capacity
    return math.ceil(total_water / (len(grid) * len(grid[0])))