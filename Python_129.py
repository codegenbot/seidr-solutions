def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        if (i, j) in visited or not 0 <= i < n or not 0 <= j < n:
            return None

        min_val = float("inf")
        min_path = None

        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                val = m[ni][nj]
                path_val = path + [val] if len(path) > 0 else [val]
                p = dfs(ni, nj, path_val, visited | {(i, j)})
                if p is not None and len(p) == k:
                    return p

        return min_path

    for i in range(n):
        for j in range(n):
            m[i][j] = (m[i][j], 0)

    res = dfs(0, 0, [], set())
    return [val[0] for val in res]