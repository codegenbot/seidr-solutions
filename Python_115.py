def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    moves = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += 1

    while water > capacity:
        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 1 and water > capacity:
                    water -= 1
                    moves += 1

    return moves