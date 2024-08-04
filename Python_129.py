def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(x, y, path, remaining_k):
        min_path = [float("inf")]

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < path[-1] and remaining_k > 0:
                min_path = min(min_path, dfs(nx, ny, path + [grid[nx][ny]], remaining_k - 1), key=len)

        return min_path

    min_path = [float("inf")]

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]], k)
            min_path = min(min_path, path, key=len)

    return min_path[1:]