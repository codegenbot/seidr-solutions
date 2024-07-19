def max_fill(grid, capacity):
    total_water = 0
    
    for row in grid:
        total_water += sum(row)
    
    return math.ceil(total_water / capacity) * len(grid[0]) - total_water