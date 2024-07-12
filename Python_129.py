def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    result = []

    def dfs(x, y, path):
        nonlocal result
        if len(path) == k:
            return
        visited[x][y] = True
        result.append(path[-1])
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                dfs(nx, ny, path + [grid[nx][ny]])
        visited[x][y] = False

    for i in range(N):
        for j in range(N):
            dfs(i, j, [])
    return result