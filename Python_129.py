def get_neighbors(grid, cell):
    # Get the row and column index of the current cell
    i, j = cell[0], cell[1]

    # Initialize an empty list to store the neighbors
    neighbors = []

    # Check if the cell has a neighbor above it
    if i > 0:
        neighbors.append((i - 1, j))

    # Check if the cell has a neighbor below it
    if i < len(grid) - 1:
        neighbors.append((i + 1, j))

    # Check if the cell has a neighbor to its left
    if j > 0:
        neighbors.append((i, j - 1))

    # Check if the cell has a neighbor to its right
    if j < len(grid[0]) - 1:
        neighbors.append((i, j + 1))

    return neighbors