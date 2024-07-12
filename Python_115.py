```
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if i == 0:
                total_water += grid[i][j]
            elif j == 0:
                total_water += grid[i][j]
            else:
                total_water += min(grid[i][j], grid[i-1][j], grid[i][j-1]) - max(0, grid[i-1][j] - grid[i][j], grid[i][j-1] - grid[i][j])
    return math.ceil(total_water / capacity)