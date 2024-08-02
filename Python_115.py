import math

def max_fill(grid, capacity):
    total_sum = sum(sum(row) for row in grid)
    max_fill_count = math.ceil(total_sum / capacity)
    return max_fill_count