```Python
import math

def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        for cell in row:
            if cell > 0 and cell <= 1:  
                total_water += cell
    return math.ceil(total_water / len(capacity))