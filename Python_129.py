def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
            if 0 <= x < N and 0 <= y < N and (x, y) not in path:
                res = dfs(x, y, path + [(x, y)])
                if res:
                    return res

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [(i, j)])
            if path:
                return [grid[x][y] for x, y in path]