import math

def max_fill(grid, capacity):
    max_capacity = max([max(row) for row in grid])
    num_buckets = math.ceil(max_capacity / capacity)
    return num_buckets