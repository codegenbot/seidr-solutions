def max_fill(grid, capacity):
    total_water = sum(row for row in map(sum, grid))
    return -(-total_water // capacity)