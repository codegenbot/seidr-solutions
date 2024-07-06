def minPath(grid, k):
    n = len(grid)
    res = []
    paths = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(i, j, k - 1, grid, path, res, paths)
    return paths

def dfs(i, j, k, grid, path, res, paths):
    n = len(grid)
    if k == 0:
        res.extend(path)
        paths.append(res[:])
        return
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
            temp = grid[ni][nj]
            grid[ni][nj], path.append(temp)
            dfs(ni, nj, k - 1, grid, path, res + [temp], paths)
            grid[ni][nj] = temp