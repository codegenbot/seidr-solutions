
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    count = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                water += capacity
                count += 1

    return count