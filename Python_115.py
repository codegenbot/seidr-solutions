def max_fill(grid):
    rows = len(grid)
    cols = len(grid[0])

    total_water = sum(1 for row in range(rows) if all(cell == "W" for cell in row))
    return total_water