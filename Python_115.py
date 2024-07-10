def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(sum(1 for col in row if col) for row in grid)
    return math.ceil(total_water / capacity)