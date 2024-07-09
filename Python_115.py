from typing import List
import math


def max_fill(grid: List[List[int]], capacity: int) -> int:
    """
    You are given a grid of integers where each integer represents a cell in a grid.
    The value at each cell represents the amount of water that can be stored in that cell.
    Your task is to determine how much water you can store by filling up all the cells
    in the grid, assuming that the water level rises evenly throughout the entire grid.

    Args:
        grid (List[List[int]]): A 2D list representing the grid of integers.
        capacity (int): The maximum amount of water that can be stored.

    Returns:
        int: The maximum amount of water that can be stored in the grid.
    """

    if not grid or not all(len(row) == len(grid[0]) for row in grid):
        raise ValueError("Grid should be a square")

    total_water = 0
    for row in grid:
        water_per_row = min(capacity, sum(row))
        total_water += water_per_row
        capacity -= water_per_row if water_per_row > 0 else 0

    return math.ceil(total_water / max(1, capacity))