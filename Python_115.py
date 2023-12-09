
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water_level = 0
    count = 0
    max_well_level = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                max_well_level = max(max_well_level, j + 1)
                water_level = max(water_level, max_well_level)
                count += 1
    
    return count