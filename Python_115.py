def max_fill(grid, capacity):
    import math
    total_buckets = 0
    for row in grid:
        for ele in row:
            total_buckets += ele
    return math.ceil(total_buckets / capacity)