import math


def max_fill(grid, capacity):
    total_water = sum(
        sum(
            min(cell, capacity) * (len(grid[0]) - abs(i - len(grid) // 2))
            for i, row in enumerate(grid)
        )
        for cell in range(len(grid[0]))
    )

    return math.ceil(total_water / (capacity + len(grid) * len(grid[0]) - total_water))