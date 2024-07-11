def max_fill(grid, capacity):
    total_water = sum(
        sum(min(row[i], capacity) for row in grid) for i in range(len(grid[0]))
    )
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed