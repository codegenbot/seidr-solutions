def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                new_path = dfs(ni, nj, path + [m[ni][nj]])
                if not res or new_path < res:
                    res = new_path
        return res

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]])
            if len(path) == k:
                return path