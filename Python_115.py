def max_fill(grid, capacity):
    required_buckets = 0
    for row in grid:
        for well in row:
            if well > 0:
                required_buckets += math.ceil(well / capacity)
    return required_buckets