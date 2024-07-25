```Python
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    
    total_water = 0
    
    for col in range(cols):
        total_water += min([row[col] for row in grid]) * (rows - abs(rows//2 - rows))
        
    return math.ceil(total_water / capacity) if total_water > capacity else 1