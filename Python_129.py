def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        result = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                result += dfs(x, y, path + [grid[x][y]])
        return result

    for i in range(n):
        for j in range(n):
            res.extend(dfs(i, j, [grid[i][j]]))

    min_len = float('inf')
    result = []
    for path in res:
        if len(path) < min_len:
            min_len = len(path)
            result = path
    return result