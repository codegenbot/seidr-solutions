def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    max_buckets = math.ceil(total_water / float(capacity))
    return int(max_buckets)