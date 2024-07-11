```python
import math

def max_fill(grid, capacity):
    total_water = sum(sum(1 for cell in row if cell) for row in grid)
    buckets_needed = math.ceil(total_water / float(capacity))
    return buckets_needed