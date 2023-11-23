def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        num_buckets += sum(row) // capacity
        if sum(row) % capacity != 0:
            num_buckets += 1
    return num_buckets