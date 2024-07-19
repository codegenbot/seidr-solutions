def max_fill(grid, capacity):
    total = 0
    for row in grid:
        count = sum(row)
        total += math.ceil(count / capacity)
    return total