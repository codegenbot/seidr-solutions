def max_fill(grid, capacity):
    return math.ceil(sum(sum(row) for row in grid) / capacity)