def max_fill(grid, capacity):
    total_water = sum(1 if cell == 1 else 0 for row in grid for cell in row)
    return -(-total_water // capacity) if capacity > 0 else float('inf')