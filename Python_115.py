def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += sum(1 if cell == 1 else 0 for cell in row)
    return math.ceil(total_water / capacity) if capacity > 0 else float('inf')