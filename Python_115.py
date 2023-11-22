import math

def max_fill(grid, capacity):
    max_water = 0
    for row in grid:
        for element in row:
            max_water = max(max_water, element)
    buckets_needed = math.ceil(max_water / capacity)
    return buckets_needed