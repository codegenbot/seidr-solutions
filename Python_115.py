from typing import List
import math


def max_fill() -> None:
    size = int(input("Enter the size of the grid: "))
    capacity = int(input("Enter the capacity: "))

    grid = []
    for _ in range(size):
        row = list(
            map(int, input(f"Enter row {i+1} values separated by space: ").split())
        )
        grid.append(row)

    print(max_fill(grid, capacity))


def max_fill(grid: List[List[int]], capacity: int) -> float:
    if not grid or not all(len(row) == len(grid[0]) for row in grid):
        raise ValueError("Grid should be a square")

    total_water = 0
    for row in grid:
        water_per_row = min(capacity, sum(row))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0

    return math.ceil(total_water / max(1, capacity))