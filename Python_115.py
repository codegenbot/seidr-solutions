import math

def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            num_buckets += well // capacity + (well % capacity != 0)
    return num_buckets