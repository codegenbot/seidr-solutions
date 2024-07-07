def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / capacity)
    return total_buckets