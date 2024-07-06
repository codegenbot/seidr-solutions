def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    path = []
    min_path = float("inf")

    def dfs(i, j, curr_path):
        # Base case: if the current path is longer than k, return
        if len(curr_path) > k:
            return

        # If we have reached the end of the grid, check if the current path is shorter than the minimum path so far
        if i == n - 1 and j == m - 1:
            if len(curr_path) < min_path:
                min_path = len(curr_path)
                path = curr_path[:]

        # If the current cell is not visited, mark it as visited and add its value to the current path
        if not visited[i][j]:
            visited[i][j] = True
            curr_path.append(grid[i][j])

            # Recursively explore all neighboring cells
            for di in range(-1, 2):
                for dj in range(-1, 2):
                    if 0 <= i + di < n and 0 <= j + dj < m:
                        dfs(i + di, j + dj, curr_path)

            # Backtrack and remove the current cell from the path
            visited[i][j] = False
            curr_path.pop()

    # Start the DFS from all cells in the grid
    for i in range(n):
        for j in range(m):
            dfs(i, j, [])

    return path