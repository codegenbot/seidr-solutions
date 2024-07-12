```python
import math

def max_fill(n, grid):
    total_water = 0
    for row in grid:
        for i in range(len(row)):
            if row[i] > 0 and (i == 0 or row[i-1] <= 0) and (i == len(row)-1 or row[i+1] <= 0):
                total_water += n * min(row)
    max_capacity = min(max(row) for row in grid)
    return math.ceil(total_water / (n * max_capacity))