def max_fill(grid, capacity):
    total_units = sum(row.count(1) for row in grid)
    return math.ceil(total_units / capacity)