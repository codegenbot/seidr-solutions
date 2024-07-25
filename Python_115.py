def max_fill(grid, capacity):
    total_water = sum(max(0, max(0, min(cell, capacity) - capacity)) for row in grid for cell in row)
    fills = (total_water + capacity - 1) // capacity
    return fills