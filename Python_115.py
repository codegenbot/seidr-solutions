def max_fill(grid, capacity):
    water = 0
    for row in grid:
        for cell in row:
            if cell == 1:
                water += 1
    if capacity < water:
        return -1
    else:
        import math

        return math.floor(water / capacity)