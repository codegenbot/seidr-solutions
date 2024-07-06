import math


def max_fill(grid, capacity):
    total_water = sum(sum(1 for x in row if x < capacity) for row in grid)
    buckets_needed = math.ceil(total_water / (capacity * len(grid)))
    return int(buckets_needed)