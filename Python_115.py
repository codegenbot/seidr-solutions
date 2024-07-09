```python
import math
def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    total_buckets = -(-total_water // capacity)
    return total_buckets```