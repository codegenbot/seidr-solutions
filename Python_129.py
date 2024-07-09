def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, path, dist, prev_dir):
        if len(path) == k:
            return path

        res = None
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= x < n and 0 <= y < n and grid[x][y] not in path:
                p = dfs(x, y, path + [grid[x][y]], dist + grid[x][y], (x - i, y - j))
                if res is None or sum(p) < sum(res):
                    res = p
        return res

    min_dist = float("inf")
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]], grid[i][j], (0, 0))
            if len(path) == k and sum(path) < min_dist:
                min_dist = sum(path)
                res = path

    return res