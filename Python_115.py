def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(1 for cell in row if cell == 0)
    return total_water // capacity