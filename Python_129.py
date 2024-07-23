def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    result = []

    def dfs(x, y, path):
        nonlocal result
        if len(path) == k:
            result = sorted(path)
            return True
        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny, path + [grid[nx][ny]])
        visited[x][y] = False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return result