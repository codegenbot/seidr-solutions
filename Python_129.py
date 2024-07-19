def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    visited = [[False for _ in range(n)] for _ in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path

        visited[i][j] = True
        for dx, dy in directions:
            x, y = i + dx, j + dy
            if 0 <= x < n and 0 <= y < n and not visited[x][y]:
                next_path = dfs(x, y, path + [grid[x][y]])
                if next_path:
                    return next_path

        visited[i][j] = False
        return []

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path