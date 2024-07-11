def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    
    for i in range(rows):
        for j in range(cols):
            left_max = right_max = grid[i][j]
            for k in range(j-1, -1, -1):
                left_max = max(left_max, grid[i][k])
            for k in range(j+1, cols):
                right_max = max(right_max, grid[i][k])
            total_water += min(left_max, right_max) - grid[i][j]
    
    return math.ceil(total_water / capacity)