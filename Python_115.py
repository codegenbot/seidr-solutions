import math


def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = 0
    for i in range(n):
        for j in range(m):
            if grid[i][j] > capacity:
                total_water += capacity
            else:
                total_water += grid[i][j]
    return math.ceil(total_water / float(capacity))