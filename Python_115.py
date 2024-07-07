def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_fetched_per_cycle = min(capacity, math.ceil(total_water / capacity))
    return -(-total_water // water_fetched_per_cycle)