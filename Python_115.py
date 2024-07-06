def max_fill(grid, capacity):
    total_water = sum(sum(1 for x in row if x) for row in grid)
    return math.ceil(total_water / (capacity**2))