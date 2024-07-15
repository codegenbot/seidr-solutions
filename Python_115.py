def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        for well in row:
            total_water += well
    
    buckets_needed = math.ceil(total_water / capacity)
    
    return buckets_needed 