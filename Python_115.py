def max_fill(grid, capacity):
    water_needed = sum(1 for row in grid for cell in row if cell)
    return math.ceil(water_needed / capacity)