def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    water_per_bucket = math.ceil(total_water / capacity)
    return water_per_bucket