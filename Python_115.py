```python
import math


def max_fill(grid, capacity):
    rows = [[0]*len(grid[0]) for _ in range(len(grid))]
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] > 0:
                for k in range(i+1, len(grid)):
                    if grid[k][j] == 0:
                        rows[k][j] = min(rows[i][j], capacity)
                        break
    total_water = sum(sum(row) for row in rows)
    buckets_needed = math.ceil(total_water / capacity)
    return buckets_needed