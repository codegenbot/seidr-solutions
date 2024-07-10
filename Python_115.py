```
import math
def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(capacity - cell for cell in row)
    return math.ceil(total_water / float(capacity))