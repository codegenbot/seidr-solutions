def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    total_buckets = math.ceil(total_water / float(capacity))
    return total_buckets