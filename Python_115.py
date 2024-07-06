```Python
def max_fill(grid, capacity):
    total_water = sum(len(row) for row in grid)
    return -(-total_water // capacity)