from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / capacity)