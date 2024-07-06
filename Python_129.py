
def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []
    min_path = None

    def dfs(i, j, k, path):
        # Base case: If we have reached the end of the path
        if k == 0:
            return path

        # Mark current cell as visited
        visited[i][j] = True

        # Check for out of bounds and already visited cells
        if i < 0 or j < 0 or i >= n or j >= m or visited[i][j]:
            return None

        # Recursively search for the minimum path in all possible directions
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            result = dfs(x, y, k - 1, path + [grid[x][y]])
            if result is not None:
                return result

        # Backtrack and remove current cell from the path
        visited[i][j] = False
        path.pop()

    # Start searching for the minimum path from all possible cells
    for i in range(n):
        for j in range(m):
            result = dfs(i, j, k - 1, [grid[i][j]])
            if min_path is None or len(result) < len(min_path):
                min_path = result

    return min_path