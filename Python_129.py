def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return path
        val = grid[i][j]
        grid[i][j] = None
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            if 0 <= i + x < n and 0 <= j + y < n and grid[i + x][j + y] is not None:
                res = dfs(i + x, j + y, path + [val])
                if res:
                    return res
        grid[i][j] = val

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [])
            if res:
                return res