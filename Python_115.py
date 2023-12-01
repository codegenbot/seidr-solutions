def max_fill(grid, capacity):
    total_buckets = 0
    for row in grid:
        total_buckets += sum(row)
    return math.ceil(total_buckets / capacity)