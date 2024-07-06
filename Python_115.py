def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water_levels = []
    for row in range(rows):
        water_levels.append([0] * cols)
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water_levels[i][j] = capacity - (grid[i][j - 1] if j > 0 else 0)
    return sum([sum(row) for row in water_levels])