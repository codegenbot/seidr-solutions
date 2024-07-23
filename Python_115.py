```
def max_fill(grid, capacity):
    n = len(grid)
    m = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    total_buckets = -(-total_water // capacity) if total_water % capacity != 0 else total_water // capacity
    return total_buckets