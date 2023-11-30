import math

def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            num_buckets += -(-well // capacity) # Round up the division result to the nearest integer
    return num_buckets