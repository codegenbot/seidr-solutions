def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        total_water += len(row) * capacity
    return math.ceil(total_water / capacity)