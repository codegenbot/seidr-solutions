def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    used_bucket_capacity = 0
    num_times_to_lower = math.ceil(total_water / float(capacity))
    return num_times_to_lower