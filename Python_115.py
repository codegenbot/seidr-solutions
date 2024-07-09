```
from math import ceil, max
from typing import List

def max_fill(grid: List[List[int]], capacity: int) -> int:
    if not grid or not all(len(row) == len(grid[0]) for row in grid):
        raise ValueError("Grid should be a square")
    
    total_water = 0
    for row in grid:
        water_per_row = min(capacity, sum(1 for cell in row if cell > 0))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0
    
    return ceil(total_water / max(1, capacity))