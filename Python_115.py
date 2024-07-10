def max_fill(grid, capacity):
    total_count = 0
    for row in grid:
        row_count = sum(row)
        total_count += math.ceil(row_count / capacity)
    return total_count