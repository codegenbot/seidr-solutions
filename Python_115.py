def max_fill(grid, capacity):
    total_moves = 0
    for row in grid:
        water_levels = sum(row)
        if water_levels % capacity == 0:
            total_moves += water_levels // capacity
        else:
            total_moves += water_levels // capacity + 1
    return total_moves