"""
import math

def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += min(row) * len(row)
    return math.ceil(total_water / capacity)

grid = [[1, 2], [3, 4]]
capacity = 5
print(max_fill(grid, capacity))
"""