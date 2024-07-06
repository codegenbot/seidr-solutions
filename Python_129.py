def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    total_paths = 0
    path = []

    # Loop through all possible paths
    for i in range(n):
        for j in range(n):
            if grid[i][j] not in path:
                total_paths += 1
                path.append(grid[i][j])
                if len(path) == k:
                    break
            if j == n - 1 and len(path) < k:
                total_paths = 0
                path = []

    # Return the minimum path
    return sorted(path)