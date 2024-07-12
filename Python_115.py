def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    fillings = math.ceil(total_water / float(capacity))
    return fillings