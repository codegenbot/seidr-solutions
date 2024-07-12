def minPath(grid, k):
    n = len(grid)
    seen = set()
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        seen.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in seen:
                v = grid[ni][nj]
                path.append(v)
                res.append(dfs(ni, nj, path[:]))
                path.pop()
        return min(res)

    for i in range(n):
        for j in range(n):
            if (i, j) not in seen:
                return dfs(i, j, [grid[i][j]])