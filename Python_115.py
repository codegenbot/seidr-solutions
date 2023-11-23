def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        num_buckets += sum(row) // capacity
    return num_buckets