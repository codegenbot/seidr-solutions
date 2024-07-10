def max_fill(grid, bucket_capacity):
    total = 0
    for row in grid:
        filled = sum(row)
        if filled % bucket_capacity == 0:
            total += filled // bucket_capacity
        else:
            total += filled // bucket_capacity + 1
    return total