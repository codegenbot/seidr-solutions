def max_fill(grid, capacity):
    total_water = sum(map(sum, grid))
    total_buckets = math.ceil(total_water / capacity)
    return total_buckets * len(grid[0]) - total_water