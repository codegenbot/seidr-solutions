import math


def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_water = sum(sum(1 if cell == "W" else 0 for cell in row) for row in grid)
    return math.ceil(total_water / float(capacity))