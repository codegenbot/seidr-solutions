```Python
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [grid[i][j]]
                dfs(i, j, k - 1, grid, path, res)
                return path + res
    return []

def dfs(i, j, k, grid, path, res):
    n = len(grid)
    if k == 0:
        res.extend(path)
        return
    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
        ni, nj = i + x, j + y
        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
            temp = grid[ni][nj]
            grid[ni][nj], path.append(temp)
            dfs(ni, nj, k - 1, grid, path, res)
            grid[ni][nj] = temp
            if len(res) > 0 and len(path) + len(res) == k:
                return