def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_buckets = math.ceil(total_water / capacity)
    return max_buckets