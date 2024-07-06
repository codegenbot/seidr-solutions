```
def max_fill(grid, capacity):
    total_water = sum(min(c, capacity) for row in grid for c in row)
    return math.ceil(total_water / capacity)