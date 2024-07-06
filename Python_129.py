def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []
    shortest_path = float("inf")

    # Define a function to find the minimum path
    def dfs(i, j, k):
        if not 0 <= i < n or not 0 <= j < m:
            return
        if visited[i][j]:
            return
        visited[i][j] = True
        current_path = [grid[i][j]]
        if len(current_path) == k:
            if shortest_path > len(current_path):
                shortest_path = current_path
                return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            dfs(x, y, k)

    # Find the minimum path
    for i in range(n):
        for j in range(m):
            dfs(i, j, k)
    return shortest_path