```
import math

def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = 0
    for r in range(rows):
        for c in range(cols-1):
            h1 = grid[r][c]
            h2 = grid[r][c+1]
            if h1 < h2:
                d = h2 - h1
                total_water += d
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed