```
from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    try:
        if not isinstance(grid, list) or not all(isinstance(row, list) for row in grid):
            raise ValueError("Invalid grid format")
        
        for row in grid:
            if any(not isinstance(val, int) for val in row):
                raise ValueError("Grid should only contain integers")
        
        if capacity < 1:
            raise ValueError("Capacity should be a positive integer")
        
        total_water = 0
        remaining_capacity = capacity
        for row in grid:
            water_per_row = min(remaining_capacity, sum(row))
            total_water += water_per_row
            remaining_capacity -= water_per_row if water_per_row > 0 else 0
        
        return math.ceil(total_water / max(1, remaining_capacity))
    except ValueError as e:
        print(f"Error: {e}")