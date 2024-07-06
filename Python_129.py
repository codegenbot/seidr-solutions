def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []
    min_path = float("inf")

    # Recursive function to find the minimum path
    def dfs(i, j, length):
        # Base case: If we have reached the end of the grid or the length of the path is greater than k, return
        if i == n - 1 and j == m - 1 or length > k:
            return

        # Mark the current cell as visited
        visited[i][j] = True

        # If we have reached the end of the grid and the length of the path is equal to k, update the minimum path
        if i == n - 1 and j == m - 1 and length == k:
            nonlocal min_path
            min_path = path[:]

        # Recursively search for the minimum path in all possible directions
        for di in range(-1, 2):
            for dj in range(-1, 2):
                if 0 <= i + di < n and 0 <= j + dj < m and not visited[i + di][j + dj]:
                    path.append(grid[i + di][j + dj])
                    dfs(i + di, j + dj, length + 1)
                    path.pop()

        # Mark the current cell as unvisited
        visited[i][j] = False

    # Start the recursive search from the top left corner
    dfs(0, 0, 0)

    return min_path