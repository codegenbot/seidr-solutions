def max_fill(grid, capacity):
    total_water = sum(max(0, cell - capacity) for row in grid for cell in row)
    fills = (total_water + capacity - 1) // (capacity - 1) + (1 if total_water % (capacity - 1) != 0 or total_water == 0 else 0)
    return fills