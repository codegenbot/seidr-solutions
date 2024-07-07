def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return [path]

        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in set(zip(*[grid[i // n][i % 9] for i in range(1, 10)]))
            ):
                res.extend(dfs(x, y, path + [grid[x][y]]))
        return res

    for i in range(n):
        for j in range(n):
            res.extend(dfs(i, j, [grid[i][j]]))

    min_path = sorted(res[0])

    for p in res:
        if sorted(p) < min_path:
            min_path = sorted(p)

    return min_path