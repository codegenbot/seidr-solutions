```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] > 0:
                total_water += min(grid[row][col], capacity)
    return math.ceil(total_water / float(capacity))