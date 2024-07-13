import math


def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if i == 0 or j == 0:
                total_water += (
                    min(grid[i][j], grid[0][j], grid[i][0], capacity) - grid[i][j]
                )
            else:
                total_water += min(grid[i][j], grid[i - 1][j], grid[0][j - 1]) - max(
                    0, min(grid[i][j], grid[i - 1][j], grid[0][j - 1])
                )

    return math.ceil(total_water / capacity)