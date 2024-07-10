def max_fill(grid, capacity):
    total_water = sum(min(cell, capacity) for row in grid for cell in row)
    return min(
        total_water // capacity * capacity + min((total_water % capacity), capacity),
        total_water,
    )