def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        min_path = path

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < path[-1]:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if sum(new_path) < sum(min_path):
                    min_path = new_path

        return min_path

    min_path = []

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if sum(path) < sum(min_path):
                min_path = path

    return min_path