Here is the completed code:

def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed