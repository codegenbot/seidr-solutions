def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        paths = []
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                new_path = path + [m[ni][nj]]
                paths.extend(dfs(ni, nj, new_path))

        return paths

    min_paths = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [])
            if not min_paths or paths < min_paths:
                min_paths = paths

    return min_paths[0]