def max_fill(grid: List[List[int]], capacity: int) -> float:
    if not grid or len(set(len(row) for row in grid)) != 1:
        raise ValueError("Grid should be a square")

    total_water = sum(sum(1 for cell in row if cell > 0) for row in grid)
    return min(total_water / (len(grid) ** 2), capacity)