def max_fill(grid, capacity):
    total_buckets = 0
    for row in grid:
        for well in row:
            if well > capacity:
                total_buckets += math.ceil(well / capacity)
            else:
                total_buckets += 1
    return total_buckets