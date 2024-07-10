def max_fill(grid, capacity):
    total_water = 0
    num_buckets = 0

    for row in grid:
        for well in row:
            total_water += well

    num_buckets = math.ceil(total_water / capacity)
    return num_buckets * capacity - total_water