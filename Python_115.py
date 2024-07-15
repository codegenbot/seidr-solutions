Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    buckets_needed = -(-total_water // capacity)
    return buckets_needed