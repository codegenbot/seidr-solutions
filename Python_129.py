def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    
    def dfs(x, y, path, path_sum):
        if path_sum > k:
            return [float("inf")]

        min_path = [float("inf")]

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < path[-1]:
                next_path = dfs(nx, ny, path + [grid[nx][ny]], path_sum + grid[nx][ny])
                min_path = min(min_path, next_path, key=lambda x: (len(x), -sum(x)))

        return min_path

    min_path = [float("inf")]
    
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]], grid[i][j])
            min_path = min(min_path, path, key=lambda x: (len(x), -sum(x)))

    return min_path[1:]