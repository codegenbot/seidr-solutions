from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = 0
    for i in range(len(grid)):
        row_min = min(row[i] for row in grid)
        for j in range(len(grid[0])):
            if row_min < grid[i][j]:
                total_water += (grid[i][j] - row_min) * capacity
            else:
                break
    return math.ceil(total_water / capacity)