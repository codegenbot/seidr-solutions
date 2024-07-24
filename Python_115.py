def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    min_buckets = math.ceil(total_water / float(capacity))
    return min_buckets