def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for row in grid:
        total_water += sum(row)
    
    # Calculate the maximum number of buckets that can be filled
    return -(-total_water // capacity) if total_water % capacity != 0 else rows