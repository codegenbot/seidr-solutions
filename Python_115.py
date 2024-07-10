def max_fill(grid, capacity):
    total_water = sum(sum(row) for row in grid)
    max_times = math.ceil(total_water / float(capacity))
    return max_times