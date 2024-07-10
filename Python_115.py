def max_fill(grid, capacity):
    num_lowerings = 0
    for row in grid:
        water_in_row = sum(row)
        while water_in_row > 0:
            num_lowerings += 1
            water_in_row = max(0, water_in_row - capacity)
    return num_lowerings