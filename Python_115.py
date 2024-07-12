def max_fill(grid, capacity):
    total_water = sum(
        (math.min(row[i], col) for i in range(len(row)))
        for row in grid
        for col in [capacity * [x for x in row][i] for i in range(len(row))]
    )
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed