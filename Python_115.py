import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water <= capacity:
        return 0
    max_water = math.ceil(total_water / capacity)
    return max(max_water * capacity - total_water, 0)