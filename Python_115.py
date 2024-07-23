```
import math

def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_water = sum(
        sum(1 if grid[row][col] == "W" else 0 for col in range(cols))
        for row in range(rows)
    )
    return math.ceil(float(total_water) / capacity)