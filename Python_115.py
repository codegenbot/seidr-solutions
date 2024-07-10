def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    filled_buckets = math.ceil(total_water / float(capacity))
    return filled_buckets