def max_fill(grid, capacity):
    # Initialize variables
    water = 0
    buckets = []
    rows = len(grid)
    cols = len(grid[0])

    # Iterate through the grid and fill buckets
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += capacity
                buckets.append((i, j))

    # Return the number of times we need to lower the buckets
    return len(buckets)