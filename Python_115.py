def max_fill(grid, capacity):
    max_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(max_water / float(capacity))
    return total_buckets