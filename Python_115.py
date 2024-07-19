def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity) * 2 * len(grid) if total_water % capacity != 0 else total_water // capacity * 2 * len(grid)