Here is the completed code:

def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    total_buckets = math.ceil(total_water / capacity)
    return total_buckets