def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / float(capacity))