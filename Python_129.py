```
def minPath(grid, k):
    n = len(grid)
    res = []

    def dfs(i, j, path):
        if len(path) > k:
            return []
        if len(path) == k:
            return [path]
        for x, y in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if (
                0 <= x < n
                and 0 <= y < n
                and (x, y) not in set(zip(*[grid[i] for i in range(n)]))
            ):
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
                paths = dfs(x, y, path + [grid[x][y]])
                if paths:
                    res.extend(paths)
                grid[x][y], grid[i][j] = grid[i][j], grid[x][y]
        return min(res) if res else []

    return dfs(0, 0, [grid[0][0]])