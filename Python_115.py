def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    fills = -(-total_water // capacity)
    return fills