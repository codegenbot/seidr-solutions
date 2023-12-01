def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        path.append(grid[i][j])
        neighbors = [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]
        for ni, nj in neighbors:
            if 0 <= ni < len(grid) and 0 <= nj < len(grid[0]):
                res = dfs(ni, nj, path)
                if res:
                    return res
        path.pop()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            res = dfs(i, j, [])
            if res:
                return res