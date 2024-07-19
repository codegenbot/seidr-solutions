def max_fill(grid, capacity):
    total_buckets = 0
    for row in grid:
        for well in row:
            if well > 0:
                total_buckets += math.ceil(well / capacity)
    return total_buckets