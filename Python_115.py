import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    minimum_fill = math.ceil(total_water / capacity)
    max_fill = minimum_fill * len(grid[0])
    
    return max(0, max_fill - total_water)