def max_fill(grid, capacity):
    total_water = sum(max(0, capacity - cell) for row in grid for cell in row)
    return total_water // capacity + (total_water % capacity > 0)