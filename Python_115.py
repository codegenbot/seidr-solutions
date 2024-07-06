```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] > 0:
                total_water += grid[row][col]
    
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed