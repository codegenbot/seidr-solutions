def max_fill(grid, capacity):
    import math

    total_water = 0
    for row in grid:
        total_water += sum(row)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed