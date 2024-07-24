def max_fill(grid, capacity):
    max_height = max(max(row) for row in grid)
    total_water = sum(max_height - item for row in grid for item in row)
    return math.ceil(total_water / capacity)