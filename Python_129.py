def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]

    def dfs(i, j, path):
        if len(path) == k:
            return path
        visited.add((i, j))
        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                res.extend(dfs(ni, nj, path + [grid[ni][nj]]))
        return min(res)

    visited = set()
    return dfs(0, 0, [grid[0][0]])