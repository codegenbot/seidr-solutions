def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    remaining_capacity = len(grid) * len(grid[0])
    fills = (total_water + remaining_capacity - 1) // capacity
    return fills