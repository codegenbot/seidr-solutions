def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Initialize a list to store the neighboring cells
    neighbors = []

    # Check if the cell to the left is within the grid and not a wall
    if col > 0 and grid[row][col - 1] != "#":
        neighbors.append((row, col - 1))

    # Check if the cell to the right is within the grid and not a wall
    if col < len(grid[0]) - 1 and grid[row][col + 1] != "#":
        neighbors.append((row, col + 1))

    # Check if the cell above is within the grid and not a wall
    if row > 0 and grid[row - 1][col] != "#":
        neighbors.append((row - 1, col))

    # Check if the cell below is within the grid and not a wall
    if row < len(grid) - 1 and grid[row + 1][col] != "#":
        neighbors.append((row + 1, col))

    return neighbors