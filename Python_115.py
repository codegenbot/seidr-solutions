def max_fill(grid, capacity):
    return sum(math.ceil(sum(row) / capacity)) if grid else 0