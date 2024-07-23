```
import math

def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_water = sum(1 for row in range(rows) if all(cell == "W" for cell in row))
    return math.ceil(total_water / float(capacity))