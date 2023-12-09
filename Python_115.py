def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    buckets = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if capacity >= j - i + 1:
                    buckets += 1

    return buckets