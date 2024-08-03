def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    bucket_needed = math.ceil(total_water / float(capacity))
    return bucket_needed