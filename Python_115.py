```
def max_fill(grid, capacity):
    total_water = sum(sum(min(cell, capacity) for cell in row) for row in grid)
    return total_water / capacity * math.ceil(total_water / capacity) if total_water != 0 else 0