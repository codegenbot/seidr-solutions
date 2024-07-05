def max_fill(grid, capacity):
    total_units = sum(sum(row) for row in grid)
    return math.ceil(total_units / capacity)