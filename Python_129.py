
def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Initialize a list to store the neighbors
    neighbors = []

    # Check if the cell has a neighbor above it
    if row > 0:
        # Add the neighbor above to the list
        neighbors.append(grid[row-1][col])

    # Check if the cell has a neighbor below it
    if row < len(grid)-1:
        # Add the neighbor below to the list
        neighbors.append(grid[row+1][col])

    # Check if the cell has a neighbor to its left
    if col > 0:
        # Add the neighbor to the left to the list
        neighbors.append(grid[row][col-1])

    # Check if the cell has a neighbor to its right
    if col < len(grid[0])-1:
        # Add the neighbor to the right to the list
        neighbors.append(grid[row][col+1])

    return neighbors