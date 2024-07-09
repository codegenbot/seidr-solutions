def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += min(row)
    
    total_buckets = math.ceil(total_water / float(capacity))
    return total_buckets