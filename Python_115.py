
def max_fill(grid, capacity):
    import math
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                total_water += 1
    return math.ceil(total_water / capacity)