def max_fill(grid, capacity):
    total_water = sum(sum(min(row[i], capacity) for row in grid) for i in range(len(grid[0])))
    needed_lowerings = -(-total_water // capacity)
    return needed_lowerings