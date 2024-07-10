```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water_volume = sum(1 for row in grid for _ in row if _ > 0) * capacity
    return -(-water_volume // capacity)