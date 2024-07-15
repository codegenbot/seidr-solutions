def max_fill(grid, capacity):
    wells = [sum(row) for row in grid]
    total_water = sum(wells)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed * max(wells)