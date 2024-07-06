def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Get the neighbors of the current cell
    neighbors = []
    if row > 0:
        neighbors.append((row - 1, col))
    if row < len(grid) - 1:
        neighbors.append((row + 1, col))
    if col > 0:
        neighbors.append((row, col - 1))
    if col < len(grid[0]) - 1:
        neighbors.append((row, col + 1))

    # Return the list of neighbors
    return neighbors