import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    additional_water_needed = max(0, math.ceil(total_water / capacity) * capacity - total_water)
    if additional_water_needed % capacity != 0:
        additional_water_needed += capacity - (additional_water_needed % capacity)
    return additional_water_needed