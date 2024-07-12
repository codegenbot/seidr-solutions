import math

def max_fill(grid):
    total_water = 0
    max_capacity = 0
    for row in grid:
        for cell in row:
            if cell > 0 and cell > max_capacity:
                max_capacity = cell
            if cell > 0 and cell <= max_capacity:
                total_water += cell
    return math.ceil(total_water / (len(grid[0]) * max_capacity))