```
def max_fill(grid, capacity):
    total_water = sum(min(len(row), capacity) for row in grid)
    return -(-total_water // capacity)