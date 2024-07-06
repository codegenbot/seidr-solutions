def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    buckets = []
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                bucket = math.ceil(grid[i][j] / capacity)
                buckets.append(bucket)
    return sum(buckets)