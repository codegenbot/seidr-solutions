def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []
    min_path = float("inf")

    def dfs(i, j, k, path):
        # Base case: If we have reached the end of the path
        if len(path) == k:
            return path

        # Mark the current cell as visited
        visited[i][j] = True

        # Check for out of bounds and already visited cells
        if i < 0 or j < 0 or i >= n or j >= m or visited[i][j]:
            return None

        # Recursively search in all possible directions
        for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            next_i = i + di
            next_j = j + dj
            if dfs(next_i, next_j, k, path):
                return path

        # Backtrack and unmark the current cell as visited
        visited[i][j] = False

    # Iterate over all possible starting cells
    for i in range(n):
        for j in range(m):
            # Check if the current cell is not already visited
            if not visited[i][j]:
                # Search for a path from the current cell
                dfs(i, j, k, path)

    return min_path