def max_fill(grid, capacity):
    total_moves = 0
    for row in grid:
        well_water = sum(row)
        while well_water > 0:
            moves = min(capacity, well_water)
            total_moves += moves
            well_water -= moves
    return total_moves