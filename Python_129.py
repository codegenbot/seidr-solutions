def minPath(grid):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [[i, j]]
                dfs(i, j, 0, grid, path, res)
    return res


def dfs(i, j, k, grid, path, res):
    n = len(grid)
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] == 1 and [ni, nj] not in path:
            temp = [[grid[m][n] for m in range(n)], [n for n in range(n)]]
            temp[0][ni], temp[0][nj], path.append([ni, nj])
            dfs(ni, nj, k + 1, grid, path, res)
            temp[0][ni], temp[0][nj] = 2, 2
    if len(res) > 0 and len(path) + len(res[-1]) == k:
        return