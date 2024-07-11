def max_water(n, m, row_values, column_values):
    grid = [[0] * (m + 1) for _ in range(n + 1)]

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            grid[i][j] = min(row_values[i - 1], column_values[j - 1])

    total_water = 0
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            width = min(row_values[i - 1], column_values[j - 1]) - grid[i][j]
            if width > 0:
                total_water += width

    return total_water