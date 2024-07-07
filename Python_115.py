Here is the solution:

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    total_bucket_capacity = len(grid[0]) * capacity
    total_buckets_needed = math.ceil(total_water / float(total_bucket_capacity))
    return total_buckets_needed