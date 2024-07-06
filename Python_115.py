```
def max_fill(grid, r, c, capacity):
    total_water = 0
    for i in range(r):
        for j in range(c):
            if grid[i][j] == 1:
                total_water += math.sqrt((i*r + j)**2 + (r**2/4))
    return math.ceil(total_water / capacity)