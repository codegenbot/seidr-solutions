import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.floor(total_water / capacity) if total_water % capacity == 0 else math.ceil(total_water / capacity)