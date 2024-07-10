def max_fill(grid, capacity):
    required_buckets = 0
    for row in grid:
        filled = sum(row)
        required_buckets += math.ceil(filled / capacity)
    return required_buckets