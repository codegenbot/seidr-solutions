def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    path = []
    visited = [[False for _ in range(m)] for _ in range(n)]

    def dfs(i, j, count, current_path):
        # Base case: if the current cell is out of bounds or has already been visited, return
        if i < 0 or i >= n or j < 0 or j >= m or visited[i][j]:
            return

        # If we have reached the end of the path, check if it's less than the current minimum path
        if count == k:
            if len(current_path) < len(path):
                path = current_path[:]
                return

        # Mark the current cell as visited and add its value to the path
        visited[i][j] = True
        current_path.append(grid[i][j])

        # Recursively explore neighboring cells
        for di in range(-1, 2):
            for dj in range(-1, 2):
                if abs(di) == abs(dj):
                    continue
                dfs(i + di, j + dj, count + 1, current_path)

        # Backtrack and remove the current cell from the path
        visited[i][j] = False
        current_path.pop()

    # Start the DFS from each cell in the grid
    for i in range(n):
        for j in range(m):
            dfs(i, j, 0, [])

    return path