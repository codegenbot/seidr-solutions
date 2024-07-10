def max_fill(grid, capacity):
    rows = len(grid)
    cols = len(grid[0])
    filled = 0
    for col in range(cols):
        for row in range(rows):
            filled += grid[row][col]
    
    return math.ceil(filled / capacity)