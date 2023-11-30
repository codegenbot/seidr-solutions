import math

def max_fill(grid, capacity):
    num_buckets = 0
    for row in grid:
        for well in row:
            num_buckets += math.ceil(well / capacity)
    return num_buckets
assert max_fill([[1, 1, 1, 1], [1, 1, 1, 1]], 9) == 8, "Error"