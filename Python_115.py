import math


def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    containers_needed = math.ceil(total_water / capacity)
    return containers_needed