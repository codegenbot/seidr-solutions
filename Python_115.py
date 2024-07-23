Here is the modified Python code:

```python
import math


def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_volume = 0
    for row in range(rows):
        for col, val in enumerate(grid[row]):
            total_volume += min(int(val), capacity)

    total_containers = total_volume // capacity
    if total_volume % capacity > 0:
        total_containers += 1
    return total_containers