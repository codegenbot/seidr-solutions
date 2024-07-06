def get_neighbors(grid, cell):
    # This function returns a list of neighboring cells for a given cell in the grid
    neighbors = []
    if cell[0] > 0:
        # Check if there is a cell to the left
        neighbors.append((cell[0] - 1, cell[1]))
    if cell[0] < len(grid[0]) - 1:
        # Check if there is a cell to the right
        neighbors.append((cell[0] + 1, cell[1]))
    if cell[1] > 0:
        # Check if there is a cell above
        neighbors.append((cell[0], cell[1] - 1))
    if cell[1] < len(grid) - 1:
        # Check if there is a cell below
        neighbors.append((cell[0], cell[1] + 1))
    return neighbors