def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    used_buckets = math.ceil(total_water / (capacity * 1.0))
    return used_buckets