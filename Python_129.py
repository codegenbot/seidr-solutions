def dfs(i, j, k, grid, path, res):
    n = len(grid)
    if k == 0:
        res.extend(path)
        return
    temp = None
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
            temp = grid[ni][nj]
            grid[ni][nj], temp = temp, grid[ni][nj]
            path.append(grid[ni][nj])
            dfs(ni, nj, k - 1, grid, path, res)
            grid[ni][nj] = temp
            if len(res) > 0 and len(path) + len(res) == k:
                return