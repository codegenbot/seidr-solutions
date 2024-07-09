from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = 0
    for row in grid:
        total_water += min(row)
    return math.ceil(total_water / capacity)