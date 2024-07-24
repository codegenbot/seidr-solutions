def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    path = []
    dfs(0, 0, grid[0][0], k, path, visited)

    return path


def dfs(x, y, val, k, path, visited):
    if k == 0:
        return
    if len(path) > k:
        return

    for dx in [-1, 0, 1]:
        for dy in [-1, 0, 1]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < len(grid) and 0 <= ny < len(grid[0]) and not visited[nx][ny] and grid[nx][ny] != val:
                path.append(val)
                visited[nx][ny] = True
                dfs(nx, ny, grid[nx][ny], k - 1, path, visited)
                if len(path) > k:
                    return
                path.pop()
                visited[nx][ny] = False