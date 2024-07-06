def get_neighbors(grid, cell):
    # Get the row and column of the current cell
    row, col = cell

    # Get the rows and columns of the neighboring cells
    neighbors = []
    for i in range(-1, 2):
        for j in range(-1, 2):
            if i == 0 and j == 0:
                continue
            neighbors.append((row + i, col + j))

    # Filter out the neighbors that are not within the grid boundaries
    return [
        neighbor
        for neighbor in neighbors
        if 0 <= neighbor[0] < len(grid) and 0 <= neighbor[1] < len(grid[0])
    ]