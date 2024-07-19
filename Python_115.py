def max_fill(grid, capacity):
    total = 0
    for row in grid:
        total += sum(row)
    return math.ceil(total / capacity)