import math
def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    max_level = 0
    for i in range(rows):
        level = 0
        for j in range(cols):
            if grid[i][j] == 1:
                level += 1
        max_level = max(max_level, level)
    return math.floor(max_level / capacity)