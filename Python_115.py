import math

def max_fill(grid, capacity):
    max_fill = 0
    for row in grid:
        for cell in row:
            max_fill += max(0, capacity - cell)
    return max_fill