import math

def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        row_capacity = sum(row)
        num_buckets += math.ceil(float(row_capacity) / capacity)
    return num_buckets