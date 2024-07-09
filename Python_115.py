import math

def max_fill(grid, capacity):
    total = 0
    for row in grid:
        water_level = sum(row)
        total += -(-water_level // capacity)
    return total