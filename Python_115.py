def max_fill(grid, capacity):
    # Initialize variables
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    fills = 0

    # Iterate over the grid
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += capacity
                fills += 1
            else:
                water -= 1
                if water < 0:
                    water = 0
                    fills += 1

    return fills