def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path, l):
        if l == k:
            return [path]
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in set(zip(*[grid[i] for i in range(n)]))
            ):
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                temp = dfs(x, y, path + [grid[x][y]], l + 1)
                if temp:
                    return temp
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
        if l < k:
            return []
        return [path]

    return min([i for i in set(dfs(0, 0, [grid[0][0]], 1)) if len(i) == k], default=[])