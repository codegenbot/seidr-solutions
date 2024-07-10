def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(x, y, value, path_length):
        nonlocal path
        if path_length == k:
            path.append(value)
            return True
        if not visited[x][y] or (path_length > 0 and path[-1] <= value):
            visited[x][y] = True
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < N and 0 <= ny < N:
                    dfs(nx, ny, grid[nx][ny], path_length + 1)
            visited[x][y] = False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, grid[i][j], 0)

    return sorted(path)