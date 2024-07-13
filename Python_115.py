```
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if i > 0 and j > 0:
                min_height = min(grid[i][j], grid[i-1][j], grid[i][j-1])
                remaining_capacity = capacity - sum([grid[k][min(j, j-1)] for k in range(i+1)])
                total_water += min(min_height, remaining_capacity)
    return math.ceil(total_water / capacity)