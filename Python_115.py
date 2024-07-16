def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity) * len(grid) if capacity > 0 else 0