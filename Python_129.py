def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(x, y, path):
        if len(path) == k:
            return [path]

        visited[x][y] = True
        res = []
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                res.extend(dfs(nx, ny, path + [grid[x][y]]))
        visited[x][y] = False
        return res

    min_path = []
    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                paths = dfs(i, j, [])
                if not min_path or sorted(paths[0]) < sorted(min_path):
                    min_path = paths[0]

    return min_path