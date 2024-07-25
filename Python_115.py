def max_fill(grid, capacity):
    total_water = sum(map(sum, grid))
    return math.ceil(total_water / capacity) * capacity - total_water