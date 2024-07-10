```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(min(a, b) for row in grid for a, b in zip(row, [cols]*cols))
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed