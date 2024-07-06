```
def minPath(grid):
    n = len(grid)
    res = []
    def dfs(i, j, k, grid, path, res):
        if k == 0:
            res.append(path[:])
            return
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] != path[-1]:
                temp = grid[ni][nj]
                grid[ni][nj], path.append(temp)
                dfs(ni, nj, k - 1, grid, path, res)
                grid[ni][nj] = temp
                if len(res) > 0 and len(path) + len(res[-1]) == k:
                    return
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                dfs(i, j, sum([sum(row) for row in grid]), [grid[i][j]], [], res)
    return res