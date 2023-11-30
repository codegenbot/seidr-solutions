import math

def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            if well >= capacity:
                num_buckets += well // capacity
    return num_buckets