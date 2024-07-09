def max_fill(grid: List[List[int]], capacity: int) -> float:
    total_water = sum(min(capacity, row.count(0)) for row in grid)
    return math.ceil(total_water / len(grid))