def minPathSum(grid):
    n = len(grid)
    m = len(grid[0])
    visited = [[False] * m for _ in range(n)]
    min_path = []
    for i in range(n):
        for j in range(m):
            if visited[i][j]:
                continue
            path = [grid[i][j]]
            dfs(grid, i, j, visited, path)
            if not min_path or path < min_path:
                min_path = path
    return min_path


def dfs(grid, x, y, visited, path):
    n = len(grid)
    m = len(grid[0])
    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny]:
            visited[nx][ny] = True
            path.append(grid[nx][ny])
            if dfs(grid, nx, ny, visited, path):
                return True
            visited[nx][ny] = False
            path.pop()
    return False