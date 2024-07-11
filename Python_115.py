def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            total_water += min(grid[i][j], capacity)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed