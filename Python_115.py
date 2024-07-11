import math

def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    bucket_cycles = math.ceil(total_water / float(capacity))
    return bucket_cycles