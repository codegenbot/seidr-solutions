```
def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(min(c, 1) for c in row) for row in grid)
    if total_water % capacity != 0:
        return -1
    return total_water // capacity