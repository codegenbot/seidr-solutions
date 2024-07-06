def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited or len(path) > k:
            return None

        visited.add((i, j))
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                res.append(dfs(ni, nj, path + [m[ni][nj]]))
        visited.remove((i, j))
        return min([x for x in res if x is not None], key=lambda x: x[:k])

    return dfs(0, 0, [m[0][0]])