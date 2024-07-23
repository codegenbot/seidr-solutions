```
import math


def max_fill(grid, capacity):
    total_water = sum(sum(1 if cell else 0 for cell in row) for row in grid)
    return math.ceil(total_water / float(capacity))