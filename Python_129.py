def get_neighbors(grid, cell):
    row, col = cell
    neighbors = []
    if row > 0 and col < len(grid[row]) - 1:
        neighbors.append((row, col + 1))
    if row < len(grid) - 1 and col > 0:
        neighbors.append((row + 1, col - 1))
    if row == len(grid) - 1 and col < len(grid[row]) - 1:
        neighbors.append((row, col + 1))
    return neighbors