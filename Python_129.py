def minPath(grid, k):
    N = len(grid)
    res = []

    for i in range(N):
        for j in range(N):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, res)
    return min(res)


def dfs(grid, x, y, k, path, res):
    N = len(grid)
    if k == 0:
        res.append(path[:])
        return

    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        nx, ny = x + dx, y + dy
        if 0 <= nx < N and 0 <= ny < N:
            if grid[nx][ny] not in path:
                path.append(grid[nx][ny])
                dfs(grid, nx, ny, k - 1, path, res)
                path.pop()