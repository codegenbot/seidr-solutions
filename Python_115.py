def max_fill(grid, capacity):
    total = 0
    for row in grid:
        count = sum(row)
        if count % capacity == 0:
            total += count // capacity
        else:
            total += count // capacity + 1
    return total