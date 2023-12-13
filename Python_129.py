def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]

    def dfs(i, j, path):
        if i < 0 or i >= n or j < 0 or j >= m or visited[i][j]:
            return
        visited[i][j] = True
        path.append(grid[i][j])
        if len(path) == k:
            return path
        min_path = None
        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        for dx, dy in directions:
            nx, ny = i + dx, j + dy
            if nx >= 0 and nx < n and ny >= 0 and ny < m and not visited[nx][ny]:
                new_path = dfs(nx, ny, path)
                if new_path:
                    if min_path is None or new_path < min_path:
                        min_path = new_path
        visited[i][j] = False
        path.pop()
        return min_path

    for i in range(n):
        for j in range(m):
            path = dfs(i, j, [])
            if path:
                return path