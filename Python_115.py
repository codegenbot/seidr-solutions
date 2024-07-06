```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for row in range(rows):
        for col in range(cols-1):
            if grid[row][col] > 0 and grid[row][col+1] > 0:
                w = min(grid[row][col],grid[row][col+1]) * (capacity/(rows + cols - 2))
                total_water += w
    return math.ceil(total_water)