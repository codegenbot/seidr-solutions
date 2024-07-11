def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        res = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in path:
                new_path = path + [grid[ni][nj]]
                res = min(res, dfs(ni, nj, new_path)) if res else dfs(ni, nj, new_path)
        return res

    for i in range(n):
        for j in range(n):
            m[i][j] = grid[i][j]

    return min(
        [dfs(i, j, [grid[i][j]]) for i in range(n) for j in range(n)],
        key=lambda x: x if len(x) == k else float("inf"),
    )