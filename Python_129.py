def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) > k:
            return
        if len(path) == k:
            return [path]
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in set(zip(*[grid[i] for i in range(n)]))
                and ((x, y) not in [(i, j)] or path[-1] != grid[x][y])
            ):
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                paths = dfs(x, y, path + [grid[x][y]])
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                if paths:
                    res.append(min(paths))
        return res[0] if res else []

    return min([path for path in set(dfs(0, 0, [grid[0][0]]))])