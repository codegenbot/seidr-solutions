def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    path = []

    def dfs(i, j, p):
        nonlocal path
        if len(p) == k:
            return p
        if (i, j) in visited or m[i][j] not in grid[0]:
            return None

        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                p.append(m[ni][nj])
                res = dfs(ni, nj, p)
                if res is not None:
                    return res
                p.pop()
        visited.remove((i, j))
        return None

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [m[i][j]])
            if path:
                return path