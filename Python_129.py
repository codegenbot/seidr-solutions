def get_neighbors(grid, cell):
    neighbors = []
    # Check if the cell is on the left edge of the grid
    if cell[0] > 0:
        neighbors.append((cell[0] - 1, cell[1]))
    # Check if the cell is on the right edge of the grid
    if cell[0] < len(grid) - 1:
        neighbors.append((cell[0] + 1, cell[1]))
    # Check if the cell is on the top edge of the grid
    if cell[1] > 0:
        neighbors.append((cell[0], cell[1] - 1))
    # Check if the cell is on the bottom edge of the grid
    if cell[1] < len(grid) - 1:
        neighbors.append((cell[0], cell[1] + 1))
    return neighbors