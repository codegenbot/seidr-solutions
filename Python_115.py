def max_fill(grid, bucket_capacity):
    total_water = sum(sum(row) for row in grid)
    return math.ceil(total_water / bucket_capacity) * len(grid[0]) - total_water