def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_per_cycle = math.ceil(total_water / capacity)
    return -(-total_water // capacity) if water_per_cycle > 0 else 0