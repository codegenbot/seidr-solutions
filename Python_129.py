def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Initialize a list to store the neighboring cells
    neighbors = []

    # Check if the cell above is valid and add it to the list
    if row > 0:
        neighbors.append((row - 1, col))

    # Check if the cell below is valid and add it to the list
    if row < len(grid) - 1:
        neighbors.append((row + 1, col))

    # Check if the cell left of the current cell is valid and add it to the list
    if col > 0:
        neighbors.append((row, col - 1))

    # Check if the cell right of the current cell is valid and add it to the list
    if col < len(grid[0]) - 1:
        neighbors.append((row, col + 1))

    return neighbors