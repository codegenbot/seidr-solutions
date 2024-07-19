def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return int(math.ceil(total_water / capacity))