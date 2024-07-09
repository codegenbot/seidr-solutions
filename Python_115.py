def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    needed_lowerings = -(-total_water // capacity)
    return needed_lowerings