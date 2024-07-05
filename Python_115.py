import math

def max_fill(grid, capacity):
    total_fills = 0
    for row in grid:
        row_sum = sum(row)
        total_fills += math.ceil(row_sum / capacity)
    return total_fills