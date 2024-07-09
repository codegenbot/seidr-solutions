def max_fill(grid: list[list[int]], capacity: int) -> int:
    total_water = 0
    for row in grid:
        water_per_row = min(capacity, sum(row))
        total_water += water_per_row
        capacity -= water_per_row
    return total_water // (capacity + 1)