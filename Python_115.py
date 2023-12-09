def max_fill(grid, capacity):
    # Initialize variables
    rows = len(grid)
    cols = len(grid[0])
    water_level = 0
    count = 0
    
    # Loop through each row and column
    for i in range(rows):
        for j in range(cols):
            # If the current cell is a well, check if it needs to be filled
            if grid[i][j] == 1:
                water_level = max(water_level, j + 1)
                count += 1
    
    # Return the number of times the bucket needs to be lowered
    return count