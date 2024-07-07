Here is the solution:

def max_fill(grid, capacity):
    n = len(grid)
    total_water = sum(sum(row) for row in grid)
    needed_buckets = math.ceil(total_water / float(capacity))
    return needed_buckets