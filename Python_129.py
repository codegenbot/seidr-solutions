def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]
    visited = set()
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if (i, j) in visited:
            return None

        visited.add((i, j))

        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [m[ni][nj]]
                res.append(dfs(ni, nj, new_path))

        return min(res, key=lambda x: x[:k])

    return dfs(0, 0, [grid[0][0]])