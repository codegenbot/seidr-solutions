def get_neighbors(grid, cell):
    # Return a list of neighboring cells for the given cell in the grid
    neighbors = []
    if cell[0] > 0:
        neighbors.append((cell[0] - 1, cell[1]))
    if cell[0] < len(grid) - 1:
        neighbors.append((cell[0] + 1, cell[1]))
    if cell[1] > 0:
        neighbors.append((cell[0], cell[1] - 1))
    if cell[1] < len(grid[0]) - 1:
        neighbors.append((cell[0], cell[1] + 1))
    return neighbors