import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    
    if total_water == 0:
        return 0
    
    return math.ceil(total_water / capacity) * len(grid) - total_water