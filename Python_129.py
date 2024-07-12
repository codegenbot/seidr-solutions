def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]

    def dfs(x, y, path):
        if len(path) == k:
            return path
        visited[x][y] = True
        min_path = path[:]

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                new_path = dfs(nx, ny, path + [grid[nx][ny]])
                if len(new_path) > len(min_path):
                    min_path = new_path
        visited[x][y] = False
        return min_path

    min_path = None
    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                path = dfs(i, j, [grid[i][j]])
                if len(path) > 0 and (min_path is None or path < min_path):
                    min_path = path

    return min_path