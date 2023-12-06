
def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    path = []
    visited = set()

    # Initialize the first cell as the starting point
    x, y = 0, 0
    path.append(grid[x][y])
    visited.add((x, y))

    # Loop until we have visited all cells or reached the end of the path
    while len(path) < k and (x, y) not in visited:
        # Get the neighbors of the current cell
        neighbors = []
        if x - 1 >= 0:
            neighbors.append((x - 1, y))
        if x + 1 < n:
            neighbors.append((x + 1, y))
        if y - 1 >= 0:
            neighbors.append((x, y - 1))
        if y + 1 < m:
            neighbors.append((x, y + 1))

        # Sort the neighbors in ascending order of their values
        neighbors = sorted(neighbors, key=lambda x: grid[x[0]][x[1]])

        # Add the next cell to the path and mark it as visited
        x, y = neighbors[0]
        path.append(grid[x][y])
        visited.add((x, y))

    return path