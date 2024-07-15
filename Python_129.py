def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path
        visited[x][y] = True
        min_path = path[:]
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if len(new_path) > len(min_path):
                    min_path = new_path
        visited[x][y] = False
        return min_path

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                return dfs(i, j, [grid[i][j]])