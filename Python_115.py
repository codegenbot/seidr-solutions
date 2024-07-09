def max_fill(grid, capacity):
    max_height = 0
    for row in grid:
        max_height = max(max_height, max(row))
    total_buckets = -(-max_height // capacity)  
    return total_buckets