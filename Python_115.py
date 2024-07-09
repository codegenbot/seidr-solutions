```
from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    total_water = sum(min(capacity, row[0]) for row in grid)
    return math.ceil(total_water / capacity)