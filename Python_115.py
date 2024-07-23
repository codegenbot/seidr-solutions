import math


def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_water = sum(
        1 for row in range(rows) for col in range(cols) if grid[row][col] == "W"
    )
    max_fills = math.ceil(total_water / float(capacity))

    return min(
        max_fills,
        sum(
            1
            for row in range(rows)
            for col in range(cols)
            if is_valid(row, col)
            and (row == 0 or grid[row - 1][col] != "W")
            and (row == rows - 1 or grid[row + 1][col] != "W")
            and (col == 0 or grid[row][col - 1] != "W")
            and (col == cols - 1 or grid[row][col + 1] != "W")
        ),
    )