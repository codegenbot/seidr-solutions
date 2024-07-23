def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / float(capacity))

    remaining_water = (total_buckets * capacity - total_water) % capacity

    if remaining_water > 0:
        total_buckets += 1

    return total_buckets