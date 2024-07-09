from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if i < len(grid) - 1 and grid[i][j] < grid[i + 1][j]:
                h_diff = grid[i + 1][j] - grid[i][j]
                total_water += min(h_diff, capacity)
    return math.ceil(total_water / capacity)