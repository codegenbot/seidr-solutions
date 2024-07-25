def max_fill(grid, capacity):
    total_water = 0
    for row in grid:
        for cell in row:
            if cell <= capacity:
                total_water += min(cell, capacity)
                break
    return math.ceil(total_water / (capacity + len(grid) * len(grid[0]) - total_water))