def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    return -(-total_water // capacity)