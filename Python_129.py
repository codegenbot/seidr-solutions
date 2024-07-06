def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    res = []

    def dfs(x, y, path):
        nonlocal res
        if len(path) == k:
            res = sorted(path)
            return True

        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                dfs(nx, ny, path + [grid[x][y]])
        visited[x][y] = False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [])

    return res