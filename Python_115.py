def max_fill(grid, capacity):
    total_count = 0
    for row in grid:
        count = sum(row)
        if count % capacity == 0:
            total_count += count // capacity
        else:
            total_count += count // capacity + 1
    return total_count