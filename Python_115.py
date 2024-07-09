import math


def max_fill(grid, capacity):
    total = 0
    for row in grid:
        water_level = sum(row)
        if water_level > capacity:
            total += math.ceil(water_level / capacity)
    return total