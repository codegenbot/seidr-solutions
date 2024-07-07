def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    fills = math.ceil(total_water / capacity)
    return fills