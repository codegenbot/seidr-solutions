```Python
def max_fill(grid, capacity):
    total_water = 0
    for i in range(1, len(grid)):
        for j in range(1, len(grid[0])):
            min_height = min(grid[i][j], grid[i-1][j], grid[i][j-1], grid[i-1][j-1])
            excess_height = max(0, min_height - grid[i][j])  
            total_water += excess_height  

    return math.ceil(total_water / capacity)