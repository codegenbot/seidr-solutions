def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for i in range(rows - 1):
        for j in range(cols):
            total_water += min(grid[i][j], grid[i+1][j]) * (capacity // min(grid[i][j], grid[i+1][j]))
    return math.ceil(total_water / capacity)