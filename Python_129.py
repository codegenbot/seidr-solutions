def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, path):
        if len(path) == k:
            return path
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in set(zip(*grid))
                and grid[x][y] not in path
            ):
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                res.append(dfs(x, y, path + [grid[x][y]]))
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
        return res if len(res) > 0 else []

    res = []
    return dfs(0, 0, [grid[0][0]])