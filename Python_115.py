```python
import math

def max_fill(grid, capacity):
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] < capacity:
                total_water += capacity - grid[i][j]
    return math.ceil(total_water / capacity)