def minPath(grid, k):
    N = len(grid)
    mpath = []

    for i in range(N):
        for j in range(N):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(grid, i, j, k - 1, path, mpath)
                if not mpath:
                    return path
    return mpath


def dfs(grid, x, y, k, path, mpath):
    N = len(grid)
    if k == 0:
        mpath = path[:]
    else:
        for dx in [-1, 0, 1]:
            for dy in [-1, 0, 1]:
                nx, ny = x + dx, y + dy
                if 0 <= nx < N and 0 <= ny < N and (dx, dy) != (0, 0):
                    if grid[nx][ny] not in path:
                        path.append(grid[nx][ny])
                        dfs(grid, nx, ny, k - 1, path, mpath)
                        path.pop()
    return mpath