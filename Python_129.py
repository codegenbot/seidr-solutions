def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []

    # Define a function to find the minimum path
    def findMinPath(i, j, k):
        if not (0 <= i < n and 0 <= j < m) or visited[i][j]:
            return float('inf')

        visited[i][j] = True
        min_path = min(findMinPath(i-1, j, k), findMinPath(i+1, j, k), findMinPath(i, j-1, k), findMinPath(i, j+1, k)) + grid[i][j]
        visited[i][j] = False

        return min_path

    # Find the minimum path
    for i in range(n):
        for j in range(m):
            if not visited[i][j]:
                path.append(findMinPath(i, j, k))

    # Return the total cost of the minimum path
    return sum(path)