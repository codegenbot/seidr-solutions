```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    min_path = []
    for i in range(n):
        for j in range(n):
            if visited[i][j]:
                continue
            path = [grid[i][j]]
            dfs(grid, i, j, k-1, visited, path)
            if not min_path or path < min_path:
                min_path = path
    return min_path

def dfs(grid, x, y, k, visited, path):
    n = len(grid)
    if k == 0:
        return True
    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
            visited[nx][ny] = True
            path.append(grid[nx][ny])
            if dfs(grid, nx, ny, k-1, visited, path):
                return True
            visited[nx][ny] = False
            path.pop()
    return False