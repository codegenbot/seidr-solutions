def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        path.append(grid[i][j])
        if i > 0:
            res = dfs(i - 1, j, path)
            if res:
                return res
        if i < len(grid) - 1:
            res = dfs(i + 1, j, path)
            if res:
                return res
        if j > 0:
            res = dfs(i, j - 1, path)
            if res:
                return res
        if j < len(grid[0]) - 1:
            res = dfs(i, j + 1, path)
            if res:
                return res
        path.pop()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [])
            if res:
                return res