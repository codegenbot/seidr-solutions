Here is the completed code:

def max_fill(grid, capacity):
    total_water = sum(row.count(1) for row in grid)
    total_buckets_needed = math.ceil(total_water / float(capacity))
    return int(total_buckets_needed)