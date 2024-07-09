from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = 0
    for i in range(len(grid[0])):
        water_per_row = min(capacity, sum([row[i] for row in grid]))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0
    return math.ceil(total_water / max(1, capacity))