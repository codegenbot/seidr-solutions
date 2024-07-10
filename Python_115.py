import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    
    remaining_capacity = capacity - total_water
    if remaining_capacity <= 0:
        return 0
    
    return math.ceil(remaining_capacity / capacity)