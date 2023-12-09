def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water_level = 0
    count = 0
    max_well_level = [0] * cols
    
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                max_well_level[j] = max(max_well_level[j], i + 1)
                count += 1
    
    return count