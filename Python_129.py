def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = []
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                new_path = path + [m[ni][nj]]
                res.append(dfs(ni, nj, new_path))
        return min(res) if res else []

    return dfs(0, 0, [grid[0][0]])