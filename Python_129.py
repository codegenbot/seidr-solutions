def minPath(grid, k):
    n = len(grid)
    visited = [[False for _ in range(n)] for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited[x][y] = True
        next_moves = []
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                next_moves.append((grid[nx][ny], nx, ny))
        next_moves.sort()

        for val, nx, ny in next_moves:
            new_path = dfs(nx, ny, path + [val])
            if new_path:
                return new_path

        visited[x][y] = False

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path