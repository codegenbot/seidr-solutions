def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Check if the cell has any neighbors in the same row or column
    neighbors = []
    for i in range(-1, 2):
        for j in range(-1, 2):
            if grid[row + i][col + j] != "X" and (i, j) != (0, 0):
                neighbors.append((row + i, col + j))
    return neighbors