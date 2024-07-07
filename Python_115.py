def max_fill(grid, capacity):
    max_water = sum([cell for row in grid for cell in row])
    total_buckets = math.ceil(max_water / float(capacity))
    return total_buckets