```
def max_fill(grid, capacity):
    total_water = sum(sum(1 for cell in row) for row in grid)
    return -(-total_water // capacity)