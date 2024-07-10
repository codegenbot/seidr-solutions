def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        row_water = min(len(row), capacity)
        total_water += sum(min(capacity, cell) for cell in row) - row_water
    return total_water