def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    visited = set()
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited or i < 0 or i >= n or j < 0 or j >= n:
            return None

        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                res.append(dfs(ni, nj, new_path))

        return min([p for p in res if p is not None], key=lambda x: x[:k])

    return dfs(0, 0, [m[0][0]])