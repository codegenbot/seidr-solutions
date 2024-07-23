def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols and grid[row][col] != "X"

    total_water = sum(
        1
        for row in range(rows)
        for col in range(cols)
        if grid[row][col] == "W" and is_valid(row, col)
    )
    return math.ceil(float(total_water) / capacity)