```
import math
def max_fill(grid, capacity):
    total_water = sum(value for row in grid for value in row)
    return math.ceil(total_water / capacity)