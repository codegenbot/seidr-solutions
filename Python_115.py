def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    if total_water == 0:
        return 0
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed