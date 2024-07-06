def get_neighbors(grid, cell):
    # Initialize an empty list to store the neighbors
    neighbors = []

    # Check if the cell is in the first row of the grid
    if cell[0] > 0:
        # Add the cell above the current cell to the list of neighbors
        neighbors.append(grid[cell[0] - 1][cell[1]])

    # Check if the cell is in the last row of the grid
    if cell[0] < len(grid) - 1:
        # Add the cell below the current cell to the list of neighbors
        neighbors.append(grid[cell[0] + 1][cell[1]])

    # Check if the cell is in the first column of the grid
    if cell[1] > 0:
        # Add the cell to the left of the current cell to the list of neighbors
        neighbors.append(grid[cell[0]][cell[1] - 1])

    # Check if the cell is in the last column of the grid
    if cell[1] < len(grid[0]) - 1:
        # Add the cell to the right of the current cell to the list of neighbors
        neighbors.append(grid[cell[0]][cell[1] + 1])

    return neighbors