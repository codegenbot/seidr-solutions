def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    remaining_capacity = sum(1 for row in grid for cell in row if cell > capacity)
    fills = (total_water + remaining_capacity - 1) // capacity
    return fills