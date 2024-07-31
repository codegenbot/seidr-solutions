def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    needed_lowerings = math.ceil(total_water / float(capacity))
    return int(needed_lowerings)