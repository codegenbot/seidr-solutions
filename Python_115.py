def max_fill(grid, capacity):
    water_amounts = [len(row) // 2 if len(row) % 2 == 0 else (len(row) + 1) // 2 for row in grid]
    return sum(water_amounts) // capacity