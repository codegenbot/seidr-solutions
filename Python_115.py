import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    
    if total_water <= capacity:
        return 0
    
    max_water_fill = total_water - capacity * len(grid) * len(grid[0])
    
    return math.ceil(max_water_fill / capacity)