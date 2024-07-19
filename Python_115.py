def max_fill(grid, capacity):
    units = sum(sum(row) for row in grid)
    return math.ceil(units / capacity) * capacity - units