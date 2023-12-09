def max_fill(grid):
    rows = len(grid)
    cols = len(grid[0])
    water_level = 0
    count = 0
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water_level = max(water_level, j + 1)
                count += 1
    
    return count