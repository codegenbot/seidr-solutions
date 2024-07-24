import math


def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for i in range(rows - 1):
        for j in range(cols):
            if grid[i][j] == 1:
                if grid[i + 1][j] == 0:
                    total_water += 1
    return math.ceil(total_water / capacity)