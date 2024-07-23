def max_fill(grid):
    rows = len(grid)
    cols = len(grid[0])

    total_water = sum(1 for row in grid for cell in row if cell == "W")
    return math.ceil(total_water / float(len(grid[0])))