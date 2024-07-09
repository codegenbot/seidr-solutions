from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = 0
    for row in grid:
        water_per_row = min(capacity, sum(row))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0
    return math.ceil(total_water / max(1, capacity))