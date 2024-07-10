```
def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += (min(cell, capacity) - cell for cell in row)
    return total_water / capacity * math.ceil(total_water / capacity) + math.floor(total_water / capacity)