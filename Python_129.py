def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None
        visited.add((i, j))
        min_val = float("inf")
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                res_val = dfs(ni, nj, new_path)
                if res_val is not None and len(res_val) == k:
                    return res_val
        return None

    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [m[i][j]])
            if res is not None:
                return res