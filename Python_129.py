def findPaths(grid):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(i, j, 0, grid, path, res, 0)
    return res


def dfs(i, j, k, grid, path, res, total):
    n = len(grid)
    if k < 0 or i < 0 or i >= n or j < 0 or j >= n:
        return
    if grid[i][j] == -1:
        res.append(
            path
            + [
                grid[i][j],
            ]
        )
        return
    temp = grid[i][j]
    grid[i][j] = -1
    path.append(temp)
    dfs(i - 1, j, k - 1, grid, path, res, total + 1 if i == 0 else total)
    dfs(i + 1, j, k - 1, grid, path, res, total + 1 if n - 1 == i else total)
    dfs(i, j - 1, k - 1, grid, path, res, total + 1 if 0 == j else total)
    dfs(i, j + 1, k - 1, grid, path, res, total + 1 if n - 1 == j else total)
    grid[i][j] = temp