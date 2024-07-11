def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(i, j, k - 1, grid, path, res)
                return path + res


def dfs(x, y, k, grid, path, res):
    n = len(grid)
    if k == 0:
        res.extend(path)
        return
    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in path:
            grid[nx][ny], temp = temp, grid[nx][ny]
            path.append(grid[nx][ny])
            dfs(nx, ny, k - 1, grid, path, res)
            path.pop()
            grid[nx][ny] = temp