import math


def max_fill(grid, capacity):
    water = 0
    for row in grid:
        for cell in row:
            if cell == 1 and water + 1 <= capacity:
                water += 1
            else:
                break
    return math.floor(water / capacity)