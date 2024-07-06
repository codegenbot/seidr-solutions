
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    water = 0
    count = 0

    for i in range(rows):
        row_capacity = 0
        for j in range(cols):
            if grid[i][j] == 1:
                row_capacity += capacity
                count += 1
        water = max(water, row_capacity)

    return count