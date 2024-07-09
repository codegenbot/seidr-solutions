```
from typing import List
import math


def max_fill() -> int:
    num_rows = int(input("Enter number of rows: "))
    num_cols = int(input("Enter number of columns: "))

    grid = [[0 for _ in range(num_cols)] for _ in range(num_rows)]

    capacity = int(input("Enter the maximum fill level: "))

    total_water = 0

    for row in grid:
        water_per_row = min(capacity, sum(row))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0

    avg_fill_level = math.ceil(total_water / max(1, capacity))

    return avg_fill_level