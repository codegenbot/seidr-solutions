def max_fill(grid, capacity):
    remaining_water = sum(sum(row) for row in grid)
    return math.ceil(remaining_water / capacity) * len(grid)