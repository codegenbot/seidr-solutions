def max_fill(grid: List[List[int]], capacity: int) -> float:
    if not grid or any(len(row) != len(grid[0]) for row in grid):
        raise ValueError("Grid should be a square")

    total_water = sum(sum(1 for cell in row if cell > 0) for row in grid)
    return min(total_water / capacity, 1.0)