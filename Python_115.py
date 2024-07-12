def max_fill(grid, capacity):
    return sum(math.ceil(sum(1 for x in row) / capacity) for row in grid)