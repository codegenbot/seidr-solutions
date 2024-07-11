```
import math


def max_fill(grid, capacity):
    total_water = sum(min(row[i], row[:i].count(capacity), row[i+1:].count(capacity)) for i in range(len(grid[0])))
    return math.ceil(total_water / capacity)