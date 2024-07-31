def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    total_lowerings = math.ceil(total_water / float(capacity))
    return total_lowerings