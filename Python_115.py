def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(1 for row in grid for cell in row if cell == 1)
    total_buckets = -(-total_water // capacity) 
    if total_water % capacity > 0:
        total_buckets += 1
    return int(total_buckets)