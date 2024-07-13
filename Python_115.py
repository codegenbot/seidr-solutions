```
import math


def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            w = min(grid[i][j], grid[0][j], grid[i][0], capacity) - (
                grid[i][j] if i == 0 or j == 0 else max(0, min(grid[i][j], grid[i - 1][j], grid[0][j - 1]))
            )
            total_water += w
            capacity -= w if w > 0 else 0

    return math.ceil(total_water / capacity)