```
def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid) - 1):
        for j in range(len(grid[i])):
            if j == len(grid[i]) - 1:
                total_water += min(capacity, sum(grid[i][k] for k in range(j+1)))
            else:
                total_water += min(capacity, (min(grid[i][j], grid[i][j+1]) - capacity))
    return total_water // capacity