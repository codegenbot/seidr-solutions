def max_fill(grid, capacity):
    total_buckets = 0
    for row in grid:
        total_buckets += math.ceil(sum(row) / float(capacity))
    return total_buckets