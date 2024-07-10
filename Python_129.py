def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        paths = []
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in set(zip(*[grid[i] for i in range(n)]))
            ):
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                paths.extend(dfs(x, y, path + [grid[x][y]]))
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
        return paths if len(path) < k else [min(paths, key=len)]

    return min(
        min(dfs(0, 0, [grid[0][0]]), key=lambda x: (len(x), x)),
        key=lambda x: (-len(x), x),
    )