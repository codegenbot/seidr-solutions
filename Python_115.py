def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    bucket_cycles = math.ceil(total_water / capacity)
    return bucket_cycles