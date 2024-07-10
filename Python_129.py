def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return [path]

        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 1 <= ni < n and 1 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                res.extend(dfs(ni, nj, new_path, visited | {(ni, nj)}))
        return res

    paths = dfs(0, 0, [grid[0][0]], {(0, 0)})
    min_path = min(paths)

    return min_path