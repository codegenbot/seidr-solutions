import math


def max_fill(grid, capacity):
    water_per_bucket = 0
    for row in grid:
        total_bucket = sum(row) // capacity
        if sum(row) % capacity != 0 and sum(row) // capacity + 1 > water_per_bucket:
            water_per_bucket = sum(row) // capacity + 1
    return math.ceil(water_per_bucket)