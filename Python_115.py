```
def max_fill(grid, capacity):
    total_water = sum(cell for row in grid for cell in row)
    return -(-total_water // capacity)