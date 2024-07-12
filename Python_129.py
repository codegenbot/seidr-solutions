def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]
    visited = set()
    path = []

    def dfs(i, j, p):
        nonlocal path
        if len(p) == k:
            return p
        if (i, j) in visited:
            return None
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 1 <= ni < n and 1 <= nj < n and (ni, nj) not in visited:
                p.append(m[ni][nj])
                res = dfs(ni, nj, p)
                if res is not None:
                    return res
                p.pop()
        visited.remove((i, j))
        return None

    for i in range(1, n + 1):
        for j in range(1, n + 1):
            path = dfs(i, j, [m[i][j]])
            if path is not None:
                return path