def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    
    water_total = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(water_total / float(capacity))
    
    return buckets_needed