def max_fill(grid, capacity):
    return sum(sum(1 + (math.ceil(w / capacity) - 1) for w in row) for row in grid)