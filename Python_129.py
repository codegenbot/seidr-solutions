def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        res = None
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                p = dfs(ni, nj, path + [grid[ni][nj]], visited.copy())
                if p and (res is None or p < res):
                    res = p
        return res

    res = []
    for i in range(n):
        for j in range(n):
            p = dfs(i, j, [grid[i][j]], set())
            if p and (res is None or p < res):
                res = p
    return res