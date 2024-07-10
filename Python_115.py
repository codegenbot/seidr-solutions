def max_fill(grid, capacity):
    total_water = sum(map(sum, grid))
    return math.ceil(total_water / capacity) * len(grid) if capacity != 0 else 0