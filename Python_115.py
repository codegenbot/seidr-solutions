def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(row) for row in grid)
    water_per_bucket = math.ceil(total_water / capacity)
    return total_water // water_per_bucket + (total_water % water_per_bucket > 0)