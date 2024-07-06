def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row = cell // len(grid[0])
    col = cell % len(grid[0])

    # Initialize a list to store the neighboring cells
    neighbors = []

    # Check if the cell has a north neighbor
    if row > 0:
        # Add the north neighbor to the list
        neighbors.append((row - 1, col))

    # Check if the cell has a south neighbor
    if row < len(grid) - 1:
        # Add the south neighbor to the list
        neighbors.append((row + 1, col))

    # Check if the cell has an east neighbor
    if col > 0:
        # Add the east neighbor to the list
        neighbors.append((row, col - 1))

    # Check if the cell has a west neighbor
    if col < len(grid[0]) - 1:
        # Add the west neighbor to the list
        neighbors.append((row, col + 1))

    return neighbors