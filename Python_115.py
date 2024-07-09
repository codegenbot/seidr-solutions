Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    num_buckets = math.ceil(total_water / float(capacity))
    return num_buckets