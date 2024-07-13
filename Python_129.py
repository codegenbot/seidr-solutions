def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                path.append(m[ni][nj])
                res = dfs(ni, nj, path)
                if res:
                    return res
                path.pop()
        return None

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [m[i][j]])
            if res:
                return res