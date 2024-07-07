def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    used_bucket_times = math.ceil(total_water / float(capacity))
    return used_bucket_times