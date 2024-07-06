def get_neighbors(grid, cell):
    neighbors = []
    # Check if the cell is in the first row
    if cell[0] > 0:
        neighbors.append((cell[0] - 1, cell[1]))
    # Check if the cell is in the last row
    if cell[0] < len(grid) - 1:
        neighbors.append((cell[0] + 1, cell[1]))
    # Check if the cell is in the first column
    if cell[1] > 0:
        neighbors.append((cell[0], cell[1] - 1))
    # Check if the cell is in the last column
    if cell[1] < len(grid[0]) - 1:
        neighbors.append((cell[0], cell[1] + 1))
    return neighbors