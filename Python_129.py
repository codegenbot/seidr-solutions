def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = sorted(curr_path)
            return True
        visited[x][y] = True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny, curr_path + [grid[nx][ny]])
        visited[x][y] = False

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]])

    return path