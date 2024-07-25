def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - cell) for row in grid for cell in row)
    fills = (total_water + capacity - 1) // capacity
    return fills