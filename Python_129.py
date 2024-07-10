def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(i, j, k - 1, grid, path, res)
                if res:
                    return res
    return []


def dfs(i, j, k, grid, path, res):
    n = len(grid)
    if k < 0:
        return
    if not path or len(path) == k + 1:
        res.append(path[:])
        return
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
            path.append(grid[ni][nj])
            dfs(ni, nj, k - 1, grid, path, res)
            path.pop()