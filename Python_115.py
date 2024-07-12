```
import math

def max_fill(n, capacity_grid):
    total_water = 0
    max_capacity = float("inf")

    for i in range(len(capacity_grid)):
        if isinstance(capacity_grid[i], list):
            for j in range(len(capacity_grid[i])):
                total_water += capacity_grid[i][j]
                max_capacity = min(max_capacity, capacity_grid[i][j])
        elif isinstance(capacity_grid[i], int):
            total_water += capacity_grid[i]
            max_capacity = min(max_capacity, capacity_grid[i])

    return math.ceil(total_water / (n * max_capacity)) if max_capacity else 0