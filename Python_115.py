from math import ceil
from typing import List


def max_fill(grid: List[List[int]], capacity: int) -> int:
    if not isinstance(grid, list) or not all(isinstance(row, list) for row in grid):
        raise ValueError("Invalid grid format")

    for row in grid:
        if any(not isinstance(val, int) for val in row):
            raise ValueError("Grid should only contain integers")

    if capacity < 1:
        raise ValueError("Capacity should be a positive integer")

    total_water = 0
    for i in range(len(grid)):
        water_per_row = min(capacity, sum(1 for cell in grid[i] if cell == 2))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0

    return ceil(total_water / max(1, capacity))