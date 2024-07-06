def get_neighbors(grid, cell):
    # Get the row and column index of the current cell
    i, j = cell

    # Initialize a list to store the neighboring cells
    neighbors = []

    # Check if the cell above is within the grid boundaries and is not a wall
    if i > 0 and grid[i - 1][j] != "#":
        neighbors.append((i - 1, j))

    # Check if the cell below is within the grid boundaries and is not a wall
    if i < len(grid) - 1 and grid[i + 1][j] != "#":
        neighbors.append((i + 1, j))

    # Check if the cell to the left is within the grid boundaries and is not a wall
    if j > 0 and grid[i][j - 1] != "#":
        neighbors.append((i, j - 1))

    # Check if the cell to the right is within the grid boundaries and is not a wall
    if j < len(grid[0]) - 1 and grid[i][j + 1] != "#":
        neighbors.append((i, j + 1))

    return neighbors