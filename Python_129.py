def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    path = []
    visited = [[False for _ in range(m)] for _ in range(n)]
    total_cells = n * m

    # Define a function to check if a cell is valid
    def isValid(x, y):
        return x >= 0 and x < n and y >= 0 and y < m and not visited[x][y]

    # Loop through the grid and find the minimum path
    for i in range(total_cells - k + 1):
        # Initialize variables for the current cell
        curr_x = i // m
        curr_y = i % m

        # Check if the current cell is valid
        if not isValid(curr_x, curr_y):
            continue

        # Add the current cell to the path
        path.append(grid[curr_x][curr_y])
        visited[curr_x][curr_y] = True

        # Check if we have reached the end of the path
        if len(path) == k:
            break

    return path