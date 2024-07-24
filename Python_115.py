```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for row in grid:
        total_water += sum(row)
    return -(-total_water // (rows * cols * capacity))