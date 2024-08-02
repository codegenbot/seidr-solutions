import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    filled_capacity = total_water // capacity
    remainder = total_water % capacity
    if remainder > 0:
        return filled_capacity + 1
    else:
        return filled_capacity