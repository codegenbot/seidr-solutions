def max_fill(grid, capacity):
    max_water = sum(sum(row) for row in grid)
    return math.ceil(max_water / capacity)