def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return -(-total_water // capacity)  # Use integer division to calculate the result