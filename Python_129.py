def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(x, y, val, length):
        nonlocal path
        if length == k:
            path.append(val)
            return True
        visited[x][y] = True
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                dfs(nx, ny, val, length + 1)
        visited[x][y] = False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, grid[i][j], 0)

    return path