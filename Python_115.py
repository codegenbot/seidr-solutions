def max_fill(grid):
    rows = len(grid)
    cols = len(grid[0])
    total_water = sum(1 for row in grid for cell in row if cell > 0)

    for i in range(cols):
        for j in range(rows):
            if grid[j][i] > 0:
                amount_to_fill = min(grid[j][i], rows - j)
                grid[j][i] -= amount_to_fill
                total_water += amount_to_fill

    return ceil(total_water / (rows * cols))