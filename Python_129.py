def minPath(grid):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == '1':
                path = ['1']
                dfs(i, j, 0, grid, path, res, grid.count('1'))
    return res

def dfs(i, j, k, grid, path, res, total):
    n = len(grid)
    if total - sum(1 for x in range(n) for y in range(n) if grid[x][y] == '1' - k < 0:
        return
    if k == 0:
        res.append(path[:])
        return
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
            temp = grid[ni][nj]
            grid[ni][nj], path.append(temp)
            dfs(ni, nj, k - 1, grid, path, res, total)
            grid[ni][nj] = temp