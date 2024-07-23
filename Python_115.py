def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])

    total_area = sum(
        1 if cell != "W" else 0 for row in range(rows) for cell in grid[row]
    ) * min(capacity for cell in grid[0] if cell != "W")

    return math.ceil(
        total_area
        / float(min(cell for row in grid for cell in row if cell != "W") * capacity)
    )