def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    buckets = [0] * rows
    total_water = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                total_water += 1
                buckets[i] += 1

    return total_water - (capacity * rows)