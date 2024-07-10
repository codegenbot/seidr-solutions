````
import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)

grid = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
capacity = 15
print(max_fill(grid, capacity))