```
import math


def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        for val in row:
            total_water += min(val, capacity)
            if total_water >= capacity:
                return math.ceil(total_water / capacity)
    return math.ceil(total_water / capacity)