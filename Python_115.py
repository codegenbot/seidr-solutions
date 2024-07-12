```
import math

def max_fill(n, capacity_grid):
    total_water = 0
    max_capacity = float('inf')
    for row in capacity_grid:
        total_water += len(row)
        if min(row) < max_capacity:
            max_capacity = min(row)
    return math.ceil(total_water / (n * max_capacity))