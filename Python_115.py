def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(row.count(1) for row in grid)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed