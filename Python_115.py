```
def max_fill(grid, capacity):
    total_water = sum(sum(1 for cell in row if cell == 1) for row in grid)
    return math.ceil(total_water / capacity)