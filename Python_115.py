```
import math


def max_fill(grid, capacity):
    total = sum(sum(row) for row in grid)
    total_cells = len(grid) * len(grid[0])
    empty_tanks = (total_cells - total) // min(len(row) for row in grid)
    return math.ceil((total + empty_tanks * capacity) / capacity)