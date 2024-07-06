def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = [[0 for _ in range(cols)] for _ in range(rows)]
    count = 0
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1 and water[i][j] >= capacity:
                water[i][j] += 1
                count += 1
    return count