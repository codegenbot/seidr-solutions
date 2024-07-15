def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path
        
        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if new_path:
                    return new_path
        visited[x][y] = False

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path