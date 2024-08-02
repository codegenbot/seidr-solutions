import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    total_capacity = sum(row.count(1) for row in grid)
  
    return math.ceil(total_capacity / capacity)