def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(x, y, current_path):
        nonlocal path
        if len(current_path) == k:
            path = sorted(current_path)
            return True

        if visited[x][y] or grid[x][y] not in current_path:
            return False

        visited[x][y] = True
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                if dfs(nx, ny, current_path + [grid[x][y]]):
                    return True

        visited[x][y] = False
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, []):
                return path