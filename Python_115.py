def max_fill(grid, bucket_capacity):
    total_water = 0
    for row in grid:
        total_water += sum(row)
    return math.ceil(total_water / bucket_capacity) * 2