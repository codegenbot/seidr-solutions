```
import math

def max_fill(grid, capacity):
    max_fills = math.ceil(sum(len([cell for cell in row if cell]) for row in grid) / capacity)
    return max_fills if capacity > 0 else float('inf')