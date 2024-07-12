def max_fill(grid, bucket_capacity):
    bucket_count = 0
    for row in grid:
        water_row = sum(row)
        if water_row % bucket_capacity == 0:
            bucket_count += water_row // bucket_capacity
        else:
            bucket_count += water_row // bucket_capacity + 1
    return bucket_count