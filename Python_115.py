```
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(1 if cell > 0 else 0 for cell in row) for row in grid)
    buckets_needed = -(-total_water // capacity)
    return buckets_needed