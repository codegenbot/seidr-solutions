def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] < capacity:
                total_water += min(capacity - grid[i][j], (rows - i) * (cols - j))
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed