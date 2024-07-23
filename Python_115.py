def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    def is_valid(row, col):
        return 0 <= row < rows and 0 <= col < cols

    total_water = sum(1 for _ in range(rows) for _ in range(cols) if grid[_][_]== "W")
    return math.ceil(total_water / float(capacity))