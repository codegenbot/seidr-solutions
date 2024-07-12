def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] < 1:
                continue
            res.append(grid[i][j])
            path = [grid[i][j]]
            dfs(grid, i, j, k - 1, path)
            return path

def dfs(grid, i, j, k, path):
    n = len(grid)
    if k == 0:
        return
    for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
        if 0 <= x < n and 0 <= y < n:
            if grid[x][y] not in path:
                res = list(path)
                res.append(grid[x][y])
                dfs(grid, x, y, k - 1, res)
    return