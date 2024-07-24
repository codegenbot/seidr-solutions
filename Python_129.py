def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited or i < 0 or i >= n or j < 0 or j >= n:
            return None
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                visited.add((i, j))
                p = dfs(ni, nj, path + [m[ni][nj]])
                visited.remove((i, j))
                if p is not None:
                    return p
        return None

    for i in range(n):
        for j in range(n):
            res.append(dfs(i, j, [m[i][j]]))
    res.sort()
    return [x[0] for x in res[0]]