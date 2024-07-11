```
def minPath(grid, k):
    n = len(grid)
    
    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                return dfs(x, y, path + [grid[x][y]])
        return []

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [grid[i][j]])
            if res:
                return res[1:]