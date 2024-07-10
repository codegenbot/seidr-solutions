def max_fill(grid, bucket_capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / bucket_capacity)
    return buckets_needed