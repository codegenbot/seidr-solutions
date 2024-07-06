def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = [[0 for _ in range(cols)] for _ in range(rows)]

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water[i][j] = capacity

    count = 0
    while True:
        can_fill = False
        for i in range(rows):
            for j in range(cols):
                if water[i][j] < capacity and grid[i][j] == 1:
                    water[i][j] += 1
                    count += 1
                    can_fill = True
        if not can_fill or count >= rows * cols:
            break

    return count