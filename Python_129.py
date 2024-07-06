def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    path = []
    visited = set()

    # Start from the top-left corner
    i = 0
    j = 0

    # Loop until we have visited all cells or reached the end of the path
    while len(path) < k and i < n and j < m:
        # Add the current cell to the path
        path.append(grid[i][j])
        visited.add((i, j))

        # Find the next cell in the path
        next_cell = None
        for x in range(max(0, i - 1), min(n, i + 2)):
            for y in range(max(0, j - 1), min(m, j + 2)):
                if (x, y) not in visited:
                    next_cell = (x, y)
                    break
            if next_cell is not None:
                break
        i, j = next_cell

    # Return the path
    return path