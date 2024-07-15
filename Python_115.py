def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    used_buckets = math.ceil(total_water / capacity)
    return used_buckets