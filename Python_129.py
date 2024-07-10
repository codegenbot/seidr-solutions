def minPath(grid, k):
    n = len(grid)
    res = []

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, res)
                if not res:
                    return path

    return res


def dfs(grid, x, y, k, path, res):
    n = len(grid)
    if k == 0:
        res.append(path[:])
    else:
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in path:
                grid[nx][ny], grid[x][y] = grid[x][y], grid[nx][ny]
                path.append(grid[x][y])
                dfs(grid, nx, ny, k - 1, path, res)
                path.pop()
                grid[nx][ny], grid[x][y] = grid[x][y], grid[nx][ny]