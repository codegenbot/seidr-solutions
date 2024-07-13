def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] not in path:
                path.append(grid[ni][nj])
                res.append(dfs(ni, nj, path))
                path.pop()
        return min(res, key=lambda x: sorted(x)) if res else []

    res = dfs(0, 0, [grid[0][0]])
    return sorted(res)