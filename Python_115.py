def max_fill(grid, capacity):
    total_water = sum(sum(1 for x in row if x) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed