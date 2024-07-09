def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water_collected = 0
    for _ in range(math.ceil(cols / capacity)):
        water_collected += 1
        bucket_water = 0
        for row in grid:
            bucket_water += sum(1 for cell in row if cell == 1)
            for i, cell in enumerate(row):
                if cell == 1:
                    row[i] = 0
        grid[:] = [[cell % capacity if cell > 0 else 0 for cell in row] for row in grid]
    return water_collected